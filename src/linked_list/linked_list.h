/*
** EPITECH PROJECT, 2024
** secured
** File description:
** linked_list.h
*/

#pragma once

typedef struct list_node_s {
    int hash_id;
    char *value;
    struct list_node_s *next;
}list_node;
