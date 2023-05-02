#include "lists.h"

/**
 * Calculates the sum of all the integers in a linked list of listint_t nodes
 *
 * @param head A pointer to the first node of the list
 * @return The resulting sum of all the integers in the list
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *node_ptr = head;

    while (node_ptr != NULL)
    {
        sum += node_ptr->n;
        node_ptr = node_ptr->next;
    }

    return sum;
}
