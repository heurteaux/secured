/*
** EPITECH PROJECT, 2023
** erz
** File description:
** ger
*/

#include "my.h"
#include <stdlib.h>
#include <stdbool.h>

bool do_sort(char **tab)
{
    int i = 0;
    char *tmp;
    bool edited = false;

    for (i = 0; tab[i + 1] != 0; i++) {
        if (my_strcmp(tab[i], tab[i + 1]) > 0) {
            tmp = my_strdup(tab[i]);
            tab[i] = my_strdup(tab[i + 1]);
            tab[i + 1] = my_strdup(tmp);
            edited = true;
        }
    }
    return edited;
}

void my_sort_word_array(char **tab)
{
    bool edited = true;

    while (edited) {
        edited = do_sort(tab);
    }
}
