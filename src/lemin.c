/*
** EPITECH PROJECT, 2020
** aurel
** File description:
** lemin
*/

#include "my.h"

list_t *initlist(void)
{
    list_t *newlist;

    newlist = malloc(sizeof(list_t));
    newlist->head = NULL;
    newlist->tail = NULL;

    return (newlist);
}

void addnote(list_t *list, char *data)
{
    node_t *newlink = malloc(sizeof(node_t));

    newlink->data = data;
    if (list->tail == NULL) {
        list->head = newlink;
    } else {
        list->tail->next = newlink;
    }
    newlink->next = NULL;
    list->tail = newlink;
}

source_t *init_source(void)
{
    source_t *src = malloc(sizeof(source_t));

    src->ant = 0;
    src->start = NULL;
    src->finish = NULL;
    return (src);
}

int lemin(void)
{
    int i = 0;
    list_t *list = initlist();
    source_t *src = init_source();
    char **tab = stock_input();

    while (tab[i] != NULL) {
        addnote(list, tab[i]);
        i++;
    }
    list_chaine(list, src);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 1)
        return (84);
    return (lemin());
}
