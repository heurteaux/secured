/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task15
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    while (*str != '\0') {
        if (*str < 'A' || *str > 'Z') {
            return 0;
        }
        str++;
    }
    return 1;
}
