/*
** EPITECH PROJECT, 2023
** day05
** File description:
** task07
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    while (nb <= 2147483647) {
        if (my_is_prime(nb) == 1)
            return nb;
        nb ++;
    }
    return 0;
}
