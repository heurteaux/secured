/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task03
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int i = 0;
    char tmp = '0';

    while (i < len - i) {
        tmp = str[i];
        str[i] = str[len - i];
        str[len - i] = tmp;
        i++;
    }
    return &str[0];
}
