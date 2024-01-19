/*
** EPITECH PROJECT, 2023
** SecuredBS
** File description:
** hashtable.h
*/

#pragma once
#include "../src/linked_list/linked_list.h"

typedef struct hashtable_s {
    int len;
    list_node **table;
    int (*hash_fn)(char *, int);
} hashtable_t;

int hash(char *key, int len);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);

void delete_hashtable(hashtable_t *ht);
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
