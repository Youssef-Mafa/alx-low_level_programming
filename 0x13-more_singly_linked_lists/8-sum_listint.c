#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data or 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *a = head;
	int x = 0;

	while (a != NULL)
	{
		x += a->n;
		a = a->next;
	}
	return (x);
}
