/*
** EPITECH PROJECT, 2023
** day05
** File description:
** task05
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    for (int i = 0; i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
