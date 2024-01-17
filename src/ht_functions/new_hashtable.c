/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** new_hashtable.c
*/

#include "../../includes/mlist.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht = malloc(sizeof(hashtable_t));

    if (ht == NULL || len <= 0 || hash == NULL)
        return (NULL);
    ht->size = len;
    ht->table = malloc(sizeof(mlist *) * len);
    ht->hash = hash;
    for (int i = 0; i < len; i++)
        ht->table[i] = mcreate();
    return ht;
}
