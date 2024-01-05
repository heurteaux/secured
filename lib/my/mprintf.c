/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

void put_value(char code, va_list lst)
{
    switch (code) {
        case 'd':
            return my_put_nbr(va_arg(lst, int));
        case 'i':
            return my_put_nbr(va_arg(lst, int));
        case 's':
            return my_putstr(va_arg(lst, char *));
        case 'c':
            return my_putchar(va_arg(lst, int));
        case '%':
            return my_putchar('%');
        default:
            return;
    }
}

void mprintf(const char *format, ...)
{
    va_list lst;

    va_start(lst, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            put_value(format[i + 1], lst);
            i++;
            continue;
        }
        my_putchar(format[i]);
    }
    va_end(lst);
}
