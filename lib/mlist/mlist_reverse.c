/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "mlist.h"

void mrev(mlist *head)
{
    mlist *prev = NULL;
    mlist *next = NULL;
    mlist *current = head->next;

    if (head->is_head == 0) {
        write(2, "Error: mlist_del: head is not a head\n", 37);
        return;
    }
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head->next = prev;
    return;
}
