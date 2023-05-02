#include "lists.h"

/**
 * reverse_listint - revers a linked list
 * @head:pointer to pointer for first element
 * Return:pointer to first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}
