/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task14
*/

#include "my.h"

int my_str_islower(char const *str)
{
    while (*str != '\0') {
        if (*str < 'a' || *str > 'z') {
            return 0;
        }
        str++;
    }
    return 1;
}
