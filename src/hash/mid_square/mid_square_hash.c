/*
** EPITECH PROJECT, 2024
** secured
** File description:
** mid_square_hash.c
*/

static long long int power(int power)
{
    long long int result = 1;

    for (int i = 0; i < power; i++) {
        result *= 10;
    }
    return result;
}

static long long int key_to_int(const char *key)
{
    long long int result = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        result += key[i];
    }
    return result;
}

static int get_seed_len(long long int seed)
{
    int i = 0;

    while (seed != 0) {
        i++;
        seed = seed / 10;
    }
    return i;
}

static int get_n_middle_digits(long long int seed, int n)
{
    int seed_len = get_seed_len(seed);
    int i = (seed_len - n) / 2;

    if (seed_len < n) {
        while (seed_len < n)
            n = n / 2 + n % 2;
    }
    return (int)((seed / power(i)) % power(n));
}

int hash(char *key, int len)
{
    int seed = key_to_int(key);

    seed *= seed;
    return get_n_middle_digits(seed, len);
}
