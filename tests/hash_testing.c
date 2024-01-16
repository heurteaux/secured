/*
** EPITECH PROJECT, 2024
** secured
** File description:
** hash_testing.c
*/

#include <criterion/criterion.h>
#include "../includes/hashtable.h"

Test(Hash_Test, normal_hash)
{
    int hash1 = hash("example_key", 6);
    int hash2 = hash("example_key", 20);
    int hash3 = hash("example_key", 1);
    int hash4 = hash("hello_guys", 6);

    cr_assert(hash1 > 0 && hash1 != hash2 && hash1 != hash3);
    cr_assert(hash2 > 0 && hash2 != hash3);
    cr_assert(hash3 > 0);
    cr_assert(hash4 > 0);
}
