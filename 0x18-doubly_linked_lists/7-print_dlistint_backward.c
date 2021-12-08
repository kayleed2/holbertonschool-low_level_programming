#include "lists.h"
/**
 * print_dlistint_backward - prints data in list backwards
 * @h: List passed in
 * Return: Number of Nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->next == NULL)
		{
			while (h)
			{
				printf("%d\n", h->n);
				h = h->prev;
				i++;
			}
			return (i);
		}
		h = h->next;
	}
	return (i);
}
