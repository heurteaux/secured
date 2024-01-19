/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_insert.c
*/

#include "../linked_list/add_element.h"
#include "../../includes/my.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>
#include <stdio.h>

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_key;
    int index;
    list_node *new_entry;

    if (!ht || !key || !value)
        return 84;
    if (my_strlen(key) == 0 || my_strlen(value) == 0)
        return 84;
    hash_key = ht->hash_fn(key, ht->len);
    index = hash_key % ht->len;
    new_entry = malloc(sizeof(list_node));
    if (hash_key == -1 || new_entry == NULL)
        return 84;
    new_entry->value = value;
    new_entry->key = key;
    new_entry->next = NULL;
    list_append(ht->table[index], new_entry);
    return 0;
}
