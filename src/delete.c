/*
** EPITECH PROJECT, 2020
** aurel
** File description:
** delete
*/

#include "my.h"

char *delete_part(char *str)
{
    int i = 0;
    int z = 0;
    char *dest = malloc(sizeof(char) * my_strlen(str) + 1);

    while (str[i]) {
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '-') {
            dest[z] = str[i];
            z++;

        } else if (str[0] == '#' && str[1] == '#' && (str[2] == 's' || str[2] == 'e')) {

            dest[z] = str[i];
            z++;
        }
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void suprr_line(char *line)
{
    int a = 0;

    while (line[a] != '\n' && line[a] != '\0') {
        a++;
    }
    line[a] = '\0';
}