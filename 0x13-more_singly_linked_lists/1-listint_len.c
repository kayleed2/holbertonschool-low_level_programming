#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - Num elements in listint_t
 * @h: Pointer to list
 * Return: Number of elements
 **/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	if (!h)
		return (-1);
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
