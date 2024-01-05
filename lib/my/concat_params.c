/*
** EPITECH PROJECT, 2023
** day08
** File description:
** task02
*/

#include "my.h"
#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    int len = 0;
    char *result;

    for (int i = 0; i < argc; i++) {
        len += my_strlen(argv[i]) + 1;
    }
    result = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) {
        result[i] = '\0';
    }
    for (int i = 0; i < argc; i++) {
        if (i != 0)
            my_strcat(result, "\n");
        my_strcat(result, argv[i]);
    }
    my_strcat(result, "\0");
    return result;
}
