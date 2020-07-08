/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** oct
*/

#include "my.h"

void my_puttab_tab(char **tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}