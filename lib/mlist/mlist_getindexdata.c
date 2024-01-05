/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include "mlist.h"

void *mgetd(mlist const *list, int index)
{
    mlist *elem = mget(list, index);

    return elem->data;
}
