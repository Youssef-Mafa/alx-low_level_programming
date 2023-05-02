#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head:pointer to pointer of head list
 * Return:NULL or data of head nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int count;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	count = tmp->n;
	*head = tmp->next;

	free(tmp);
	return (count);
}
