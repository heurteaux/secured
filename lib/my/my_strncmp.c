/*
** EPITECH PROJECT, 2023
** day06
** File description:
** task07
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i]) {
        if (s1[i] == '\0' || i == n - 1)
            return 0;
        i++;
    }
    return s1[i] - s2[i];
}
