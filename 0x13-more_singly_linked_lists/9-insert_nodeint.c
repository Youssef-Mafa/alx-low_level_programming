#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (!head)
		return (NULL);
	
	listint_t *new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	
	new->n = n;
	new->next = NULL;
	
	if (idx == 0)
	
	{
		new->next = *head;
		*head = new;
		return new;
	}
	
	listint_t *current = *head;
	for (unsigned int i = 0; current && i < idx - 1; i++)
		current = current->next;
	
	if (!current)
	{
		free(new);
		return NULL;
	}

	new->next = current->next;
	current->next = new;

	return new;
}
