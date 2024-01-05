/*
** EPITECH PROJECT, 2023
** day08
** File description:
** task04
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int get_next(char const *str, int i)
{
    while (str[i] == ' ') {
        i++;
    }
    return i;
}

int get_len(char const *str, int start)
{
    int i = start;

    while (str[i] != ' ' && str[i] != '\0') {
        i++;
    }
    return i - start;
}

int get_ttl_count(char const *str)
{
    int i = 0;
    int r = 0;

    while (i < my_strlen(str)) {
        i = get_next(str, i);
        if (str[i] != '\0') {
            i += get_len(str, i);
            r++;
        }
    }
    return r;
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    char **out = malloc(sizeof(char *) * (get_ttl_count(str) + 1));
    char *tmp;

    while (i < my_strlen(str)) {
        i = get_next(str, i);
        if (str[i] != '\0') {
            tmp = malloc(sizeof(char) * (get_len(str, i) + 1));
            tmp[0] = '\0';
            my_strncpy(tmp, &str[i], get_len(str, i));
            out[j] = tmp;
            j++;
            i += get_len(str, i);
        }
    }
    out[j] = NULL;
    return out;
}
