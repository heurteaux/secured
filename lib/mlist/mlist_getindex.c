/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include "mlist.h"
#include <stdlib.h>
#include <unistd.h>

mlist *mget(mlist const *head, int index)
{
    int i = 0;
    mlist *tmp;

    if (head->is_head == 0) {
        write(2, "Error: mget: head is not a head\n", 33);
        return NULL;
    }
    tmp = head->next;
    if (index == 0)
        return head->next;
    while (i < index) {
        tmp = tmp->next;
        i++;
    }
    return tmp;
}
