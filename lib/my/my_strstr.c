/*
** EPITECH PROJECT, 2023
** my str str
** File description:
** str
*/

#include <stdio.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    for (; *str; str++) {
        if (my_strncmp(str, to_find, my_strlen(to_find)) == 0) {
            return str;
        }
    }
    return NULL;
}
