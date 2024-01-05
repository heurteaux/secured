/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include "mlist.h"
#include <stdlib.h>

mlist *mldup(mlist const *list)
{
    mlist *new = malloc(sizeof(mlist));

    new->data = list->data;
    new->is_head = list->is_head;
    if (list->next != NULL)
        new->next = mldup(list->next);
    else
        new->next = NULL;
    return new;
}
