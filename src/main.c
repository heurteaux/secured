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
    hashtable_t *ht = new_hashtable(hash, 5);

    ht_insert(ht, "Perception", "Value1");
    ht_insert(ht, "Perception", "Value2");
    ht_dump(ht);
    return 0;
}
