/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task08
*/

// a-z 97-122
// A-Z 65-90

#include <stdbool.h>
#include "my.h"

bool is_lower_letter(char c)
{
    return (c >= 97 && c <= 122);
}

char *my_strupcase(char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_lower_letter(str[i])) {
            str[i] = (str[i] - 32);
        }
    }
    return str;
}
