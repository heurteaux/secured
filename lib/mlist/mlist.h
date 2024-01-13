/*
** EPITECH PROJECT, 2023
** B-CPE-110-MPL-1-1-bsorganized-eliot.amanieu
** File description:
** mlist.h
*/

#pragma once

typedef struct mlist_s {
    void *data;
    int is_head;
    struct mlist_s *next;
} mlist;

mlist *mcreate(void);
mlist *mput(mlist *head, void *elem, int index);
mlist *mget(mlist const *head, int index);
mlist *mldup(mlist const *head);
void mfree(mlist *head);
int mlen(mlist const *head);

void *mgetd(mlist const *head, int index);

void mfree(mlist *head);
void madd(mlist *head, void *elem);
void mdel(mlist *head, int index);
void mswap(mlist *head, int index1, int index2);
int mclear(mlist const *head);
void mrev(mlist *head);
