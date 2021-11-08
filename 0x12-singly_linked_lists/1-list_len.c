#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Prints elements of list_t
 * @h: Pointer to list
 * Return: Number of nodes
 **/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (i);
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
