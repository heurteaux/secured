/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include "mlist.h"
#include <stdlib.h>

mlist *mput(mlist *list, void *elem, int index)
{
    mlist *new = mcreate();

    new->data = elem;
    new->next = mget(list, index);
    new->is_head = 0;
    mget(list, index - 1)->next = new;
    return list;
}
