/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** delete_hashtable.c
*/

#include "../../includes/hashtable.h"
#include <stdlib.h>

void delete_hashtable(hashtable_t *ht)
{
    for (int i = 0; i < ht->size; i++) {
        mfree(ht->table[i]);
    }
    free(ht->table);
    free(ht);
}
