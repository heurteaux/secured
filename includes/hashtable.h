/*
** EPITECH PROJECT, 2023
** SecuredBS
** File description:
** hashtable.h
*/

#include "mlist.h"
#pragma once

typedef struct hashtable_s {
    int size;
    mlist **table;
    int (*hash)(char *, int);
} hashtable_t;

typedef struct entry_s {
    char *key;
    char *value;
} entry_t;

int hash(char *key, int len);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
