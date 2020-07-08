/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** 
*/

#include "my.h"

char *my_strcat(char *dest, char *src)
{
    char *str = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src) + 1);
    int i = 0;

    if (str == NULL)
        return (NULL);
    if (dest != NULL) {
        for (int a = 0; dest[a]; a++) {
            str[i] = dest[a];
            i++;
        }
    }
    for (int a = 0; src[a]; a++) {
        str[i] = src[a];
        i++;
    }
    str[i] = '\0';
    return (str);
}