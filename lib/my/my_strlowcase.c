/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task08
*/

#include <stdbool.h>
#include "my.h"

bool is_upper_letter(char c)
{
    return (c >= 65 && c <= 90);
}

char *my_strlowcase(char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_upper_letter(str[i])) {
            str[i] = (str[i] + 32);
        }
    }
    return str;
}
