/*
** EPITECH PROJECT, 2024
** secured
** File description:
** hash_testing.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../lib/my/my.h"
#include <stdio.h>
#include "../includes/hashtable.h"

Test(HashTableTest, inserts)
{
    hashtable_t *ht = new_hashtable(&hash, 4);
    ht_insert(ht, "Vision ", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "Kratos", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 71");
    ht_insert(ht, "</3", "+33 7 51 49 01 38 11");
    ht_insert(ht, "Vision ", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "Kratos", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 71");
    cr_assert(1 == 1);
}

Test(HashTableTest, deletes)
{
    cr_redirect_stdout();
    hashtable_t *ht = new_hashtable(&hash, 4);
    ht_insert(ht, "Vision ", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "Kratos", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 71");
    ht_insert(ht, "</3", "+33 7 51 49 01 38 11");
    ht_delete(ht, "Kratos");
    ht_delete(ht, "Vision ");
    ht_delete(ht, "<3");
    ht_delete(ht, "</3");
    ht_delete(ht, "</3");
    ht_dump(ht);

    char *expected = "[0]:\n[1]:\n[2]:\n[3]:\n";
    cr_assert_stdout_eq_str(expected);
}

Test(HashTableTest, empty_table)
{
    cr_redirect_stdout();
    hashtable_t *ht = new_hashtable(&hash, 1);
    ht_dump(ht);

    char *expected = "[0]:\n[1]:\n[2]:\n[3]:\n";
    cr_assert_stdout_eq_str(expected);
}