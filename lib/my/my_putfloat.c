/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_putfloat.c
*/

#include "my.h"

void my_putfloat(float nbr)
{
    int integer_part;
    int digit;

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    integer_part = (int)nbr;
    my_put_nbr(integer_part);
    my_putchar('.');
    nbr -= integer_part;
    for (int i = 0; i < 6; i++) {
        nbr *= 10;
        digit = (int)nbr;
        my_put_nbr(digit);
        nbr -= digit;
    }
}
