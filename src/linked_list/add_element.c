/*
** EPITECH PROJECT, 2024
** secured
** File description:
** add_element.c
*/

#include "add_element.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../lib/my/my.h"
#include "linked_list.h"

static int linked_list_append(list_node *temp, list_node *new_entry)
{
    while (temp->next != NULL) {
        if (temp->key && my_strcmp(temp->key, new_entry->key) == 0) {
            temp->value = new_entry->value;
            free(new_entry);
            return 84;
        }
        temp = temp->next;
    }
    if (temp->key && my_strcmp(temp->key, new_entry->key) == 0) {
        temp->value = new_entry->value;
        free(new_entry);
        return 84;
    }
    temp->next = new_entry;
    return 0;
}

int list_append(list_node *head, list_node *new_entry)
{
    list_node *temp = head;

    if (temp->key && my_strcmp(temp->key, new_entry->key) == 0) {
        temp->value = new_entry->value;
        free(new_entry);
        return 0;
    }
    if (head->value == NULL) {
        head->value = new_entry->value;
        head->key = new_entry->key;
        free(new_entry);
        return 0;
    }
    return linked_list_append(temp, new_entry);
}
