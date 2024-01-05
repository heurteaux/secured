/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_tabswap.c
*/

#include <stdlib.h>
#include "my.h"

void my_tabswap(char **tab, int i1, int i2)
{
    char *tmp;

    tmp = malloc(sizeof(char) * (my_strlen(tab[i1]) + 1));
    my_strcpy(tmp, tab[i1]);
    tab[i1] = malloc(sizeof(char) * (my_strlen(tab[i2]) + 1));
    my_strcpy(tab[i1], tab[i2]);
    tab[i1][my_strlen(tab[i1])] = '\0';
    tab[i2] = malloc(sizeof(char) * (my_strlen(tmp) + 1));
    my_strcpy(tab[i2], tmp);
    tab[i2][my_strlen(tmp)] = '\0';
}
