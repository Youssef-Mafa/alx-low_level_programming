#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    if (!head || !str)
        return NULL;
    
    list_t *new = malloc(sizeof(list_t));
    if (!new)
        return NULL;
    
    new->str = strdup(str);
    if (!new->str) {
        free(new);
        return NULL;
    }
    
    new->len = strlen(str);
    new->next = *head;
    *head = new;
    
    return new;
}
