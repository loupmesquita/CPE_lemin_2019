/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** 
*/

#include "my.h"

char *my_strcpy(char *src)
{
    int z = 0;
    char *dest = malloc(sizeof(char) * my_strlen(src) + 1);

    while (src[z] != '\0') {
        dest[z] = src[z];
        z++;
    }
    dest[z] = '\0';
    return (dest);
}
