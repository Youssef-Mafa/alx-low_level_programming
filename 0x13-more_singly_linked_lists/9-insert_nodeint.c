#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at the specified position
 * @head: pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* create new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0) {
		/* insert at the beginning of the list */
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* traverse the list to find the position to insert the new node */
	listint_t *current = *head;
	unsigned int i;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (i != idx - 1) {
		/* index is out of range */
		free(new_node);
		return (NULL);
	}

	/* insert new node at the specified position */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
