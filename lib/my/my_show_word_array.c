/*
** EPITECH PROJECT, 2023
** day08
** File description:
** tasks4
*/

#include "my.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
    return 0;
}
