/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_insert.c
*/

#include "../../includes/mlist.h"
#include "../../includes/my.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>

char *number_to_string(int nb)
{
    char *str = malloc(sizeof(char) * 10);
    int i = 0;

    while (nb > 0) {
        str[i] = nb % 10 + '0';
        nb = nb / 10;
        i++;
    }
    str[i] = '\0';
    return my_revstr(str);
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index = hash(key, ht->size) % ht->size;
    entry_t *entry = malloc(sizeof(entry_t));
    int (*hash)(char *, int) = ht->hash;

    entry->key = number_to_string(hash(key, ht->size));
    entry->value = value;
    madd(ht->table[index], entry);
    return 0;
}
