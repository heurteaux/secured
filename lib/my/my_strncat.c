/*
** EPITECH PROJECT, 2023
** day07
** File description:
** task02
*/

#include "my.h"

char *my_strncat(char *dest, const char *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0; i < nb && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}
