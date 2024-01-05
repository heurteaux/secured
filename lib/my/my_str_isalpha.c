/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task12
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    while (*str != '\0') {
        if ((*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')) {
            return 0;
        }
        str++;
    }
    return 1;
}
