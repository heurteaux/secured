/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "mlist.h"

void madd(mlist *list, void *elem)
{
    mlist *new = mcreate();
    mlist *lasted_elem = list;

    new->is_head = 0;
    new->data = elem;
    new->next = NULL;
    while (lasted_elem->next != NULL)
        lasted_elem = lasted_elem->next;
    lasted_elem->next = new;
}
