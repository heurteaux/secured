/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_search.c
*/

#include "../../includes/my.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>

char *ht_search(hashtable_t *ht, char *key)
{
    int hash_key = ht->hash_fn(key, ht->len);
    int index = hash_key % ht->len;
    list_node *temp = ht->table[index];

    if (index == -1)
        return NULL;
    while (temp != NULL) {
        if (temp->hash_id != -1 && temp->hash_id == hash_key)
            return temp->value;
        temp = temp->next;
    }
    return NULL;
}
