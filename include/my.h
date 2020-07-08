/*
** EPITECH PROJECT, 2020
** aurel
** File description:
** my
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include "lemin.h"

#ifndef _MY_H_
#define _MY_H_

int my_putstr(char *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char *str);
void my_puttab_tab(char **tab);
int my_strlen(char *str);
int my_len_tab(char *str);
int my_len_str(char *str);
char **str_to_word_array(char *str);
char *my_strcat(char *dest, char *src);
char *my_strcpy(char *src);
char *my_strdup(char *src);
int strlen_static(char *stat);
char *my_cpy_n(char **stat);
char *get_next_line(int fd);
char *my_read(char *av);


#endif