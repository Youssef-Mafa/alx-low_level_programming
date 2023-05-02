#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	for (; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);
	return count;
}
