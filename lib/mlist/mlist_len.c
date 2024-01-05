/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist_add.c
*/

#include "mlist.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int mlen(mlist const *head)
{
    int l = 0;

    if (head->is_head == 0) {
        write(2, "Error: mlen: head is not a head\n", 33);
        return -1;
    }
    while (head->next != NULL) {
        head = head->next;
        l++;
    }
    return l;
}
