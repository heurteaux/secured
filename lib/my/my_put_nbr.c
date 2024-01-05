/*
** EPITECH PROJECT, 2023
** day03
** File description:
** task07
*/

#include "my.h"

void my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
    }
    my_putchar('0' + (n % 10));
}
