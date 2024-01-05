/*
** EPITECH PROJECT, 2023
** epitech
** File description:
** my_putnchar
*/

#include "my.h"

void my_putnchar(char c, int times)
{
    if (times < 0)
        return;
    for (int i = 0; i < times; i++) {
        my_putchar(c);
    }
}
