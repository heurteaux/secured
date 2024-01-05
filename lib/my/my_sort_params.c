/*
** EPITECH PROJECT, 2023
** day07
** File description:
** task06
*/

#include "my.h"

int my_sort_params(int ac, char **av)
{
    ac ++;
    if (ac == 50)
        my_sort_params(0, av);
    return 0;
}
