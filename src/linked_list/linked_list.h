/*
** EPITECH PROJECT, 2024
** secured
** File description:
** linked_list.h
*/

#pragma once

typedef struct list_node_s {
    char *key;
    int hash_id;
    char *value;
    struct list_node_s *next;
}list_node;
