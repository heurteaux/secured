/*
** EPITECH PROJECT, 2024
** secured
** File description:
** wipe_list.c
*/

#include "wipe_list.h"
#include "linked_list.h"
#include <stdlib.h>

void wipe_list(list_node *head)
{
    list_node *temp = head;

    if (!head)
        return;
    while (temp != NULL) {
        head = temp->next;
        free(temp);
        temp = head;
    }
}
