/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_search.c
*/

#include "../../includes/mlist.h"
#include "../../includes/my.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>

char *ht_search(hashtable_t *ht, char *key)
{
    int index = hash(key, ht->size) % ht->size;
    entry_t *entry;

    if (index == -1)
        return NULL;
    for (int i = 0; i < mlen(ht->table[index]); i++) {
        entry = mgetd(ht->table[index], i);
        if (my_strcmp(entry->key, key) == 0)
            return entry->value;
    }
    return NULL;
}
