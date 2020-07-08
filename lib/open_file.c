/*
** EPITECH PROJECT, 2020
** openfile
** File description:
** openfile
*/

#include "../include/my.h"

char *my_read(char *av)
{
    struct stat sb;
    char *buf = NULL;
    int fd;
    int nb_read = 0;

    stat(av, &sb);
    buf = malloc(sizeof(char) * (sb.st_size) + 1);
    fd = open(av, O_RDONLY);
    if (fd == -1)
        return (NULL);
    nb_read = read(fd, buf, sb.st_size);
    buf[nb_read]  = '\0';
    close(fd);

    return (buf);
}