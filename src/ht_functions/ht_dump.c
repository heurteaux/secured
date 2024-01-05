/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_dump.c
*/
#include <stdlib.h>
#include "hashtable.h"
#include "mlist.h"
#include "my.h"

void ht_dump(hashtable_t *ht)
{
    char *key;
    char *value;

    for (int i = 0; i < ht->size; i++) {
        mprintf("[%i]:\n", i);
        for (int j = 0; j < mlen(ht->table[i]); j++) {
            key = (char *) (((entry_t *) (mgetd(ht->table[i], j)))->key);
            value = (char *) (((entry_t *) (mgetd(ht->table[i], j)))->value);
            mprintf("> %s - %s\n", key, value);
        }
    }
}
