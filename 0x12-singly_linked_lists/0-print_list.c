#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints elements of list_t
 * @h: Pointer to list
 * Return: Number of nodes
 **/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *ptr = h;

	if (h == NULL)
		return (i);
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			ptr = ptr->next;
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
