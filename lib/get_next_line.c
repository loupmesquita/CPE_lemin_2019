/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** ok
*/

#include "my.h"

int strlen_static(char *stat)
{
    if (stat == NULL)
        return (0);
    for (int i = 0; stat[i]; i++) {
        if (stat[i] == '\n')
            return (1);
    }
    return (0);
}

char *my_cpy_n(char **stat)
{
    int z = 0;
    char *str = malloc(sizeof(char) * my_strlen(*stat) + 1);

    if (str == NULL)
        return (NULL);
    for (z = 0; stat[0][z] != '\n' && stat[0][z]; z++)
        str[z] = stat[0][z];
    str[z] = '\0';
    if (stat[0][z + 1] != '\0')
        stat[0] += z + 1;
    else
        *stat = NULL;
    return (str);
}

char *get_next_line(int fd)
{
    static char *stat = NULL;
    char *str = NULL;
    char *buff = malloc(sizeof(char) * 1 + 1);
    int size = 0;
    int i = 0;

    if (buff == NULL)
        return (NULL);
    while (strlen_static(stat) != 1) {
        size = read(fd, buff, 1);
        if (size < 1)
            return (NULL);
        buff[size] = '\0';
        stat = my_strcat(stat, buff);
    }
    str = my_cpy_n(&stat);
    return (str);
}