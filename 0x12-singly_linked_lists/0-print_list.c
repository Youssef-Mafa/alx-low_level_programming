#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t count = 0;
    
    for (; h != NULL; h = h->next)
    {
        if (h->str != NULL)
            printf("[%d] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        count++;
    }
    
    return count;
}
