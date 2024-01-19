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

int test_hash(char *key, __attribute__((unused))int len)
{
    int result = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        result += key[i];
    }
    return result;
}


/*Test(HashTableTest, inserts)
{
    hashtable_t *ht = new_hashtable(&test_hash, 4);
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
    hashtable_t *ht = new_hashtable(&test_hash, 4);
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
    hashtable_t *ht = new_hashtable(&test_hash, 1);
    ht_dump(ht);

    char *expected = "[0]:\n";
    cr_assert_stdout_eq_str(expected);
}

Test(HashTableTest, index_collision)
{
    hashtable_t *ht = new_hashtable(&test_hash, 4);

    ht_insert(ht, "AD", "sample_value");
    ht_insert(ht, "BC", "sample_new_value");
    cr_assert_stdout_eq_str("[0]:\n[1]:\n> 133 - sample_value\n> 133 - sample_new_value\n[2]:\n[3]:\n[4]:\n");
    delete_hashtable(ht);
}*/

Test(hash, my_compute_power_rec1)
{
    int nb = 2;
    int p = -1;

    cr_assert_eq(my_compute_power_rec(nb, p), 0);
}

// hashtable
Test(hashtable, new_hashtable1)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht->len, 5);
    cr_assert_eq(ht->hash_fn, hash);
    cr_assert_eq(ht->table[0]->key, NULL);
    cr_assert_eq(ht->table[1]->key, NULL);
    cr_assert_eq(ht->table[2]->key, NULL);
    cr_assert_eq(ht->table[3]->key, NULL);
    cr_assert_eq(ht->table[4]->key, NULL);
}

Test(hashtable, new_hashtable2)
{
    hashtable_t *ht = new_hashtable(hash, 2);

    cr_assert_eq(ht->len, 2);
    cr_assert_eq(ht->hash_fn, hash);
    cr_assert_eq(ht->table[0], NULL);
    cr_assert_eq(ht->table[1], NULL);
}

Test(hashtable, new_hashtable3)
{
    hashtable_t *ht = new_hashtable(hash, -1);

    cr_assert_null(ht);
}

// delete hashtable
Test(hashtable, del_hashtable1)
{
    hashtable_t *ht = new_hashtable(hash, 2);

    ht_insert(ht, "Key1", "Perception");
    ht_insert(ht, "Agility", "Baba");
    delete_hashtable(ht);
    cr_assert_not_null(ht);
}

Test(hashtable, del_hashtable2)
{
    hashtable_t *ht = new_hashtable(hash, 2);

    ht_insert(ht, "Agility", "Baba");
    ht_insert(ht, "Perception", "Value2");
    delete_hashtable(ht);
    cr_assert_not_null(ht);
}

// insert
Test(insert, ht_insert1)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Key1", "Perception");
    cr_assert_str_eq(ht->table[0]->value, "Perception");
    cr_assert_eq(ht->hash_fn(ht->table[0]->key, ht->len), 58582440);
    cr_assert_eq(ht->table[0]->next, NULL);
}

Test(insert, ht_insert2, .init = cr_redirect_stdout)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Perception", "Value1");
    cr_assert_str_eq(ht->table[2]->value, "Value1");
    cr_assert_eq(ht->hash_fn(ht->table[0]->key, ht->len), 24303257);
    cr_assert_eq(ht->table[2]->next, NULL);
    ht_insert(ht, "Agility", "Value2");
    ht_dump(ht);
    cr_assert_stdout_eq_str("[0]:\n[1]:\n[2]:\n> 25163347 - Value2\n> 24303257 - Value1\n[3]:\n[4]:\n");
}

Test(insert, ht_insert3, .init = cr_redirect_stdout)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Perception", "Value1");
    ht_insert(ht, "Perception", "Value2");
    ht_dump(ht);
    cr_assert_stdout_eq_str("[0]:\n[1]:\n[2]:\n> 24303257 - Value2\n[3]:\n[4]:\n");
}

Test(insert, ht_insert_errors)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    cr_assert_eq(ht_insert(ht, NULL, "Value1"), 84);
    cr_assert_eq(ht_insert(ht, "Perception", NULL), 84);
    cr_assert_eq(ht_insert(ht, "", "Value1"), 84);
    cr_assert_eq(ht_insert(ht, "Agility", ""), 84);
    ht = NULL;
    cr_assert_eq(ht_insert(ht, "Agility", "Value1"), 84);
}

// delete
Test(delete, ht_delete1, .init = cr_redirect_stdout)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Key1", "Perception");
    ht_insert(ht, "Agility", "Value1");
    ht_insert(ht, "Perception", "Value2");
    ht_delete(ht, "Key1");
    ht_delete(ht, "Agility");
    ht_delete(ht, "Perception");
    ht_dump(ht);
    cr_assert_stdout_eq_str("[0]:\n[1]:\n[2]:\n[3]:\n[4]:\n");
}

Test(delete, ht_delete_errors)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Key1", "Perception");
    ht_insert(ht, "Agility", "Value1");
    ht_insert(ht, "Perception", "Value2");
    cr_assert_eq(ht_delete(ht, NULL), 84);
    cr_assert_eq(ht_delete(ht, ""), 84);
    cr_assert_eq(ht_delete(ht, "Key2"), 84);
    ht = NULL;
    cr_assert_eq(ht_delete(ht, "Key1"), 84);
}

Test(dump, ht_dump1, .init = cr_redirect_stdout)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_dump(ht);
    cr_assert_stdout_eq_str("[0]:\n[1]:\n[2]:\n[3]:\n[4]:\n");
}

Test(dump, ht_dump2, .init = cr_redirect_stdout)
{
    hashtable_t *ht = new_hashtable(test_hash, 5);

    ht_insert(ht, "Key1", "Perception");
    ht_dump(ht);
    cr_assert_stdout_eq_str("[0]:\n> 58582440 - Perception\n[1]:\n[2]:\n[3]:\n[4]:\n");
}

Test(search, ht_search1)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Key1", "Perception");
    ht_insert(ht, "Agility", "Baba");
    ht_insert(ht, "Perception", "Value2");
    cr_assert_str_eq(ht_search(ht, "Agility"), "Baba");
}

Test(search, ht_search_errors)
{
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Key1", "Perception");
    cr_assert_null(ht_search(ht, NULL));
    cr_assert_null(ht_search(ht, ""));
    cr_assert_null(ht_search(ht, "Key2"));
    ht = NULL;
    cr_assert_null(ht_search(ht, "Key1"));
}

// fcts_lib
Test(putnbr, test_putnbr, .init = cr_redirect_stdout)
{
    my_put_nbr(-123);
    cr_assert_stdout_eq_str("-123");
}

