/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** 
*/

#include "my.h"

int my_getnbr(char *str)
{
    int z = 0;
    int tab = 0;
    int m = 0;

    while (str[tab] == '+' || str[tab] == '-') {
        if (str[tab] == '-')
            m++;
        tab++;
    }
    while (str[tab] != '\0') {
        if (str[tab] >= '0' && str[tab] <= '9') {
            z = z * 10 + str[tab] - 48;
            tab++;
        } else
            break;
    }
    if (m%2 == 1)
        return (-z);
    else
        return (+z);
}