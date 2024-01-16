/*
** EPITECH PROJECT, 2024
** secured
** File description:
** mid_square_hash.c
*/

#include <limits.h>

const int HSH_LEN = 6;

static long long int power(int power)
{
    long long int result = 1;

    for (int i = 0; i < power; i++) {
        result *= 10;
    }
    return result;
}

// polynomial rolling key_to_int function using XOR shift to randomize even
// more output
static unsigned long int key_to_seed(const char *key, int rdm)
{
    int base = 37;
    unsigned long long int result = 0;
    long long int power = 1;
    long long int pr_number = 1000000223;

    for (int i = 0; key[i] != '\0'; i++) {
        result = (result * base + (key[i] - 'a' + 1)) % pr_number;
        result %= LLONG_MAX;
        power = (power * base) % pr_number;
    }
    result ^= result << (rdm * rdm);
    return result;
}

static int get_seed_len(unsigned long long int seed)
{
    int i = 0;

    while (seed != 0) {
        i++;
        seed = seed / 10;
    }
    return i;
}

static int get_mid_digits(unsigned long long int seed)
{
    int seed_len = get_seed_len(seed);
    int i = (seed_len - HSH_LEN) / 2;
    int len_incr = HSH_LEN - seed_len;

    if (seed_len < HSH_LEN)
        seed *= power(len_incr);
    return (int) ((seed / power(i)) % power(HSH_LEN));
}

int hash(char *key, int len)
{
    unsigned long long int seed = key_to_seed(key, len);

    seed *= seed % ULLONG_MAX;
    return get_mid_digits(seed);
}
