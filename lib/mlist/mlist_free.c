/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_free.c
*/

#include <stdlib.h>
#include "mlist.h"

void mfree(mlist *list)
{
    mlist *tmp = list;
    mlist *next = NULL;

    while (tmp != NULL) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
}
