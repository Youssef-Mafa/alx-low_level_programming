#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of list
 * @head: pointer to head of list
 * @index: index of the node
 * Return: nth node of a listint_t or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a = head;
	unsigned int n = 0;

	while (a != NULL)
	{
		if (n == index)
			return (a);
		n++;
		a = a->next;
	}
	return (NULL);
}
