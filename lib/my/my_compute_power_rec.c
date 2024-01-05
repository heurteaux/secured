/*
** EPITECH PROJECT, 2023
** day05
** File description:
** task04
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    return nb * my_compute_power_rec(nb, p - 1);
}
