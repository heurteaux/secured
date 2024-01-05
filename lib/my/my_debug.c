/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_debug.c
*/

#include "my.h"

void my_debugint(char *text, int i)
{
    my_putstr(text);
    my_putstr(" --> ");
    my_put_nbr(i);
    my_putstr("\n");
}

void my_debugstr(char *text, char *val)
{
    my_putstr(text);
    my_putstr(" --> ");
    my_putstr(val);
    my_putstr("\n");
}
