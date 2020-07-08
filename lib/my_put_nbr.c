/*
** EPITECH PROJECT, 2020
** put_nbr
** File description:
** afficher un nombre
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb > 2147483647 || nb < -2147483648)
        return (0);
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb < 10)
        my_putchar((nb % 10) + 48);
    else {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (0);
}