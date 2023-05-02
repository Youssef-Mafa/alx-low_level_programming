#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of data in the list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    for (listint_t *node = head; node; node = node->next)
        sum += node->n;
    return sum;
}
