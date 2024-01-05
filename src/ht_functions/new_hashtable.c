/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** new_hashtable.c
*/

#include "mlist.h"
#include "my.h"
#include "hashtable.h"
#include <stdlib.h>

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht = malloc(sizeof(hashtable_t));

    ht->size = len;
    ht->table = malloc(sizeof(mlist *) * len);
    ht->hash = hash;
    for (int i = 0; i < len; i++)
        ht->table[i] = mcreate();
    return ht;
}
