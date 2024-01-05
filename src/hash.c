/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** hash.c
*/

int hash(char *key, int len)
{
    int hash = 0;
    int index = 0;

    for (int i = 0; i < len; i++) {
        hash += key[i];
    }
    index = hash % len;
    return index;
}
