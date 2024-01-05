/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "mlist.h"

void mdel(mlist *head, int index)
{
    mlist *prev = NULL;
    mlist *next = NULL;

    if (head->is_head == 0) {
        write(2, "Error: mlist_del: head is not a head\n", 37);
        return;
    }
    if (index == 0) {
        head->next = mget(head, 1);
        return;
    }
    prev = mget(head, index - 1);
    next = mget(head, index + 1);
    prev->next = next;
}
