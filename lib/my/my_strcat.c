/*
** EPITECH PROJECT, 2023
** day07
** File description:
** task02
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);

    my_strcpy(dest + dest_len, src);
    return dest;
}

char *my_str_concat(char *str1, char *str2)
{
    char *result =
        malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 1));

    my_strcpy(result, str1);
    my_strcat(result, str2);
    return result;
}
