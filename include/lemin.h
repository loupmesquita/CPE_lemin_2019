/*
** EPITECH PROJECT, 2020
** aurel
** File description:
** my
*/

typedef struct node_s {
    struct node_s *next;
    char *data;
}node_t;

typedef struct list_s {
    node_t *head;
    node_t *tail;
}list_t;

typedef struct source_s {
    int ant;
    char *start;
    char *finish;

}source_t;

char **stock_input(void);
char **get_position(list_t *list, char **pos);
char **get_link(list_t *list, char **lik);
void init_var_src(list_t *list, source_t *src);
list_t *initlist(void);
void addnote(list_t *list, char *data);
source_t *init_source(void);
void list_chaine(list_t *list, source_t *src);
void suprr_line(char *line);
char *delete_part(char *str);