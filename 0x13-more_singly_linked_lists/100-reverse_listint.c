#include "lists.h"

/**
 * reverse_listint - revers a linked list
 * @head:pointer to pointer for first element
 * Return:pointer to first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
