#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
    if (head == NULL) {
        return 0;
    }

    int sum = head->n;
    sum += sum_listint(head->next);

    return sum;
}
