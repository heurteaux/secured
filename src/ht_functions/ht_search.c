/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_search.c
*/

#include "mlist.h"
#include "my.h"
#include "hashtable.h"
#include <stdlib.h>

char *ht_search(hashtable_t *ht, char *key)
{
    int index = hash(key, ht->size);
    entry_t *entry;

    for (int i = 0; i < mlen(ht->table[index]); i++) {
        entry = mgetd(ht->table[index], i);
        if (my_strcmp(entry->key, key) == 0)
            return entry->value;
    }
    return NULL;
}
