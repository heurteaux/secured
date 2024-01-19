/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** new_hashtable.c
*/

#include "../linked_list/linked_list.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht = malloc(sizeof(hashtable_t));

    if (ht == NULL || len <= 0 || hash == NULL)
        return NULL;
    ht->len = len;
    ht->table = malloc(sizeof(list_node *) * len);
    ht->hash_fn = hash;
    for (int i = 0; i < len; i++) {
        ht->table[i] = malloc(sizeof(list_node));
        ht->table[i]->hash_id = -1;
        ht->table[i]->key = NULL;
        ht->table[i]->next = NULL;
        ht->table[i]->value = NULL;
    }
    return ht;
}
