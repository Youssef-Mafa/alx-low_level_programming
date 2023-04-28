#include <stdlib.h>
#include "lists.h"

/**
 * This function frees a linked list.
 * It takes a pointer to the head of the list as input.
*/
void free_list(list_t *head)
{
// Create a temporary pointer to traverse the list
list_t *temp;

// Loop through the list, freeing each node
while (head != NULL)
{
// Save the next node in the list
temp = head->next;
 // Free the string and the node itself
 free(head->str);
 free(head);

 // Move to the next node
 head = temp;
}
}
