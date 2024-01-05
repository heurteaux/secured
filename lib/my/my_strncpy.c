/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task02
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        if (src[i] == '\0')
            break;
        i++;
    }
    return dest;
}
