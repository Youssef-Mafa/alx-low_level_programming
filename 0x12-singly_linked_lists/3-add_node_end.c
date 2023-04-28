#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to put in the new node
 *
 * Returns: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    /* Create a new node */
    list_t *new_node = malloc(sizeof(list_t));
    if (!new_node) {
        return NULL;
    }

    /* Initialize the new node with the input string */
    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;

    /* If the list is empty, the new node becomes the head */
    if (*head == NULL) {
        *head = new_node;
        return new_node;
    }

    /* Find the last node in the list */
    list_t *last_node = *head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }

    /* Add the new node to the end of the list */
    last_node->next = new_node;

    return new_node;
}
