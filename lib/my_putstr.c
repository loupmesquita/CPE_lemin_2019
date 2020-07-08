/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** string
*/

#include "my.h"

int my_putstr(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}