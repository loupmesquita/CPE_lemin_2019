/*
** EPITECH PROJECT, 2020
** aurel
** File description:
** stock
*/

#include "my.h"

char **stock_input(void)
{
    char *buf = NULL;
    size_t bufsize = 0;
    int cmp = 0;
    int j = 0;
    struct stat sb;

    char **tab = malloc(sizeof(char *) * 100);
    while ((getline(&buf, &bufsize, stdin) != -1)) {
        suprr_line(buf);
        tab[j] = my_strdup(buf);
        j++;
    }
    tab[j] = NULL;
    return (tab);
}

char **get_position(list_t *list, char **pos)
{
    node_t *tmp = list->head;
    int a = 0;

    while (tmp != NULL) {
        if ((tmp->data[0] >= '0' && tmp->data[0] <= '9' &&
            tmp->data[1] == ' ') ||
            (tmp->data[0] == '#' && tmp->data[1] == '#' &&
                (tmp->data[2] == 's' || tmp->data[2] == 'e'))) {
            pos[a] = delete_part(my_strdup(tmp->data));
            a++;
        }
        tmp = tmp->next;
    }
    pos[a] = NULL;
    return (pos);
}

void init_var_src(list_t *list, source_t *src)
{
    node_t *tmp = list->head;

    src->ant = my_getnbr(tmp->data);
    while (tmp != NULL) {
        if (tmp->data[0] == '#' && tmp->data[1] == '#' && tmp->data[2] == 's') {
            tmp = tmp->next;
            src->start = delete_part(tmp->data);
        }
        if (tmp->data[0] == '#' && tmp->data[1] == '#' && tmp->data[2] == 'e') {
            tmp = tmp->next;
            src->finish = delete_part(tmp->data);
        }
        tmp = tmp->next;
    }
}

void list_chaine(list_t *list, source_t *src)
{
    char **pos = malloc(sizeof(char) * 100);
    char **lik = malloc(sizeof(char) * 100);
    node_t *tmp = list->head;

    init_var_src(list, src);
    tmp = list->head;
    pos = get_position(list, pos);
    tmp = list->head;
    my_putstr("#number_of_ants\n");
    my_put_nbr(src->ant);
    my_putstr("\n#rooms\n");
    my_puttab_tab(pos);
    my_putstr("#tunnels\n");
    my_puttab_tab(lik);
    my_putstr("#moves\n");
}

