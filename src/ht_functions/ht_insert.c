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

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_key = ht->hash_fn(key, ht->len);
    int index = hash_key % ht->len;
    list_node *new_entry = malloc(sizeof(list_node));

    if (index == -1 || new_entry == NULL)
        return 84;
    if (my_strlen(key) == 0)
        return 84;
    new_entry->value = value;
    new_entry->hash_id = hash_key;
    new_entry->key = key;
    new_entry->next = NULL;
    list_append(ht->table[index], new_entry);
    return 0;
}
