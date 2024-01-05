/*
** EPITECH PROJECT, 2023
** day05
** File description:
** task03
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    while (p > 0) {
        result *= nb;
        p --;
    }
    return result;
}
