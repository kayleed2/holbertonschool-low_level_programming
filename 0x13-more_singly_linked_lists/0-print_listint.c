#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint - Adds new node to list_t
 * @h: Pointer to list
 * Return: Number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
