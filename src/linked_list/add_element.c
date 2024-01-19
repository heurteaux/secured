/*
** EPITECH PROJECT, 2024
** secured
** File description:
** add_element.c
*/

#include "add_element.h"
#include "linked_list.h"
#include <unistd.h>
#include <stdlib.h>

void list_append(list_node *head, list_node *new_entry)
{
    list_node *temp = head;

    if (head->value == NULL) {
        head->value = new_entry->value;
        head->hash_id = new_entry->hash_id;
        free(new_entry);
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_entry;
}
