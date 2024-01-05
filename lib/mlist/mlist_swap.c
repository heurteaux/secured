/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include <stdlib.h>
#include "mlist.h"

void mswap(mlist *list, int index1, int index2)
{
    void *tmp = mget(list, index1)->data;

    mget(list, index1)->data = mget(list, index2)->data;
    mget(list, index2)->data = tmp;
}
