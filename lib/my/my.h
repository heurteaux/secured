/*
** EPITECH PROJECT, 2023
** day09
** File description:
** task02
*/

#pragma once
#include <stdbool.h>
#include <stdarg.h>

void my_putchar(char c);
void my_putnchar(char c, int times);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_abs(int nbr);
void my_sort_in_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *str);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *si, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_is_alpha(char const *str);
int my_str_isnum(char const *str);
int my_strislower(char const *str);
int my_str_isupper(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncar(char *dest, char const *src, int nb);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char *const *array);
bool is_upper_letter(char l);
bool is_lower_letter(char l);
int my_tablen(char **tab);
void my_tabswap(char **tab, int i, int j);
void my_newline(void);
void my_debugint(char *text, int v);
void my_debugstr(char *text, char *v);
void my_putfloat(float nbr);
void my_putdouble(long double nbr);
int my_put_err(char const *);
void my_sort_word_array(char **tab);
void mprintf(char const *format, ...);
char *my_str_concat(char *str1, char *str2);
