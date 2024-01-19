/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_dump.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../includes/hashtable.h"
#include "../../includes/my.h"
#include "../linked_list/linked_list.h"

static int get_list_size(list_node *head)
{
    int count = 0;

    while (head != NULL) {
        if (head->key)
            count++;
        head = head->next;
    }
    return count;
}

static void display_table_index(list_node *temp, hashtable_t *ht)
{
    int len = get_list_size(temp);
    list_node **node_array = malloc(sizeof(list_node) * (len + 1));
    int i = 0;

    while (temp != NULL) {
        if (temp->key) {
            node_array[i] = temp;
            i++;
        }
        temp = temp->next;
    }
    for (int n = len - 1; n >= 0; n--) {
        mprintf("> %d - %s\n", ht->hash_fn(node_array[n]->key, ht->len),
            node_array[n]->value);
    }
    free(node_array);
}

void ht_dump(hashtable_t *ht)
{
    list_node *temp;

    if (!ht)
        return;
    for (int i = 0; i < ht->len; i++) {
        mprintf("[%i]:\n", i);
        temp = ht->table[i];
        display_table_index(temp, ht);
    }
}
