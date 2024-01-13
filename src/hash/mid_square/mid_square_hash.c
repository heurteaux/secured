/*
** EPITECH PROJECT, 2024
** secured
** File description:
** mid_square_hash.c
*/

static long long int power(int number, int power)
{
    long long int result = 1;

    for (int i = 0; i < power; i++) {
        result *= number;
    }
    return result;
}

static long long int key_to_int(char *key)
{
    long long int result = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        result += key[i];
    }
    return result;
}

static int get_seed_len(long long int seed)
{
    int i = 1;

    while (seed != 0) {
        i++;
        seed = seed / 10;
    }
    return i;
}

static int get_n_middle_digits(long long int seed, int n)
{
    int seed_len = get_seed_len(seed);
    int start_pos = (seed_len - n) / 2;

    if (seed_len < n)
        return -1;
    return (int)((seed / power(10, start_pos)) % power(10, n));
}

int hash(char *key, int len)
{
    long long int seed = key_to_int(key);

    seed *= seed;
    return get_n_middle_digits(seed, len);
}
