/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task10
*/

#include <stdbool.h>
#include "my.h"

bool is_letter(char c)
{
    return is_upper_letter(c) || is_lower_letter(c);
}

bool is_digit(char x)
{
    return (x >= 48 && x <= 57);
}

char *my_strcapitalize(char *str)
{
    int last_char = '\0';

    str = my_strlowcase(str);
    for (int i = 0; i < my_strlen(str); i++) {
        last_char = (i == 0 ? '\0' : str[i - 1]);
        if (!(is_digit(last_char) || is_letter(last_char)) || i == 0) {
            str[i] = is_lower_letter(str[i]) ? (str[i] - 32) : str[i];
        }
    }
    return str;
}
