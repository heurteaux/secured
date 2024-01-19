/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** main.c
*/

#include "../includes/hashtable.h"
#include <stdio.h>

int test_hash(char *key, __attribute__((unused))int len)
{
    int result = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        result += key[i];
    }
    return result;
}

int main(void)
{
    hashtable_t *ht = new_hashtable(test_hash, 4);

    ht_insert(ht, "@", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "a", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(ht, "b", "+33 6 31 45 61 23 71");
    ht_insert(ht, "c", "caca");
    ht_insert(ht, "C", "+33 6 31 45 61 23 71");
    printf("SEARCH DEBUG: %s\n", ht_search(ht, "C"));
    ht_dump(ht);
    delete_hashtable(ht);
    return 0;
}
