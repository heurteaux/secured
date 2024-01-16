/*
** EPITECH PROJECT, 2024
** SecuredBS
** File description:
** main.c
*/

#include "../includes/hashtable.h"
#include <stdio.h>

int main(void)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    ht_insert(ht, "Vision ", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "Kratos", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 71");
    ht_insert(ht, "</3", "+33 7 51 49 01 38 11");
    ht_dump(ht);
    delete_hashtable(ht);
    return 0;
}
