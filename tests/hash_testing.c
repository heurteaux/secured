/*
** EPITECH PROJECT, 2024
** secured
** File description:
** hash_testing.c
*/

#include <criterion/criterion.h>
#include "../lib/my/my.h"
#include <stdio.h>
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

Test(Hash_Test, empty_string)
{
    int hash1 = hash("", 1);

    cr_assert(hash1 == -1);
}

Test(Hash_Test, null_len)
{
    int hash1 = hash("voiture", 0);

    cr_assert(hash1 == -1);
}

Test(Hash_Test, empty_string_null_len)
{
    int hash1 = hash("", 0);

    cr_assert(hash1 == -1);
}

Test(Hash_Test, same_input)
{
    int hash1 = hash("voiture", 10);
    int hash2 = hash("voiture", 10);

    cr_assert_eq(hash1, hash2);
}

Test(Hash_Test, small_key_diff)
{
    int hash1 = hash("a", 4);
    int hash2 = hash("b", 4);

    cr_assert(hash1 != hash2);
}
