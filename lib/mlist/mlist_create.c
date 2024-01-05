/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include "mlist.h"
#include <stdlib.h>

mlist *mcreate(void)
{
    mlist *list = malloc(sizeof(mlist));

    list->data = NULL;
    list->next = NULL;
    list->is_head = 1;
    return list;
}
