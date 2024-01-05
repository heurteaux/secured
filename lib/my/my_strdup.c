/*
** EPITECH PROJECT, 2023
** day08
** File description:
** task01
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char const *str)
{
    char *new = malloc(sizeof(char) * (my_strlen(str) + 1));

    my_strcpy(new, str);
    return new;
}
