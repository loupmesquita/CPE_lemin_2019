/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** taille string
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i])
        i++;
    return (i);
}