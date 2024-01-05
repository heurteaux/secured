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

void mclear(mlist const *head)
{
    int l = 0;

    if (head->is_head == 0) {
        write(2, "Error: mlen: head is not a head\n", 33);
        return -1;
    }
    while (l < mlen(head)) {
        mdel(head, l);
        l++;
    }
    return l;
}
