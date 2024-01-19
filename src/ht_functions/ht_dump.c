/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_dump.c
*/

#include "../../includes/hashtable.h"
#include "../../includes/my.h"
#include <unistd.h>
#include <stdio.h>

static void display_table_index(list_node *temp)
{
    while (temp != NULL) {
        if (temp->key)
            mprintf("> %d - %s\n", temp->hash_id, temp->value);
        temp = temp->next;
    }
}

void ht_dump(hashtable_t *ht)
{
    list_node *temp;

    for (int i = 0; i < ht->len; i++) {
        mprintf("[%i]:\n", i);
        temp = ht->table[i];
        display_table_index(temp);
    }
}
