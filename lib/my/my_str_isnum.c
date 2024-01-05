/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task13
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    while (*str != '\0') {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}
