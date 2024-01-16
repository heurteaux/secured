/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** ht_delete.c
*/

#include "../../includes/mlist.h"
#include "../../includes/my.h"
#include "../../includes/hashtable.h"
#include <stdlib.h>


void my_local_swap(char *a, char *b)
{
    char tmp = *a;

    *a = *b;
    *b = tmp;
}

char *my_itoa(int nb)
{
    int i = 0;
    int len = 0;
    char *str = malloc(sizeof(char) * 100);

    if (nb == 0)
        return "0";
    while (nb != 0) {
        str[i] = (nb % 10) + '0';
        nb /= 10;
        i++;
    }
    str[i] = '\0';
    len = my_strlen(str);
    for (int i = 0; i < len / 2; i++)
        my_local_swap(&str[i], &str[len - i - 1]);
    return str;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int index = hash(key, ht->size) % ht->size;
    entry_t *entry;
    int key_hash = ht->hash(key, ht->size);
    char *key_str = my_itoa(key_hash);

    for (int i = 0; i < mlen(ht->table[index]); i++) {
        entry = mgetd(ht->table[index], i);
        if (my_strcmp(entry->key, key_str) == 0) {
            mdel(ht->table[index], i);
            return 1;
        }
    }
    return 0;
}
