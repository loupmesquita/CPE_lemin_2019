/*
** EPITECH PROJECT, 2020
** str_to_word_array
** File description:
** string to tab
*/

#include "my.h"

int my_len_tab(char *str)
{
    int len_tab = 0;

    if (str == NULL)
        return (0);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n')
            len_tab++;
    }
    return (len_tab);
}

int my_len_str(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return (i);
}

char **str_to_word_array(char *str)
{
    char **buffer = malloc(sizeof(char *) * (my_len_tab(str) + 1));
    int a = 0;
    int z = 0;

    for (int i = 0; str[i]; i++) {
        buffer[z] = malloc(sizeof(char) * (my_len_str(&str[i]) + 1));
        while (str[i] != '\n') {
            buffer[z][a] = str[i];
            i++;
            a++;
        }
        buffer[z][a] = '\0';
        z += 1;
        a = 0;
    }
    buffer[z] = NULL;
    return (buffer);
}