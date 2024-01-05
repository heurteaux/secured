/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_tablen.c
*/

#include <stdlib.h>
#include "my.h"

int my_tablen(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        i ++;
    }
    return i;
}
