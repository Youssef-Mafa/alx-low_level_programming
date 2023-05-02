#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	for (; h != NULL; h = h->next, ++node_count)
		printf("%d\n", h->n);

	return (node_count);
}
