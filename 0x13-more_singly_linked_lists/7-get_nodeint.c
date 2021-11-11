#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_nodeint_at_index - Deletes head node listint_t
 * @head: Pointer to list
 * @index: Index of node
 * Return: Nth node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		head = head->next;
		n++;
		if (n == index)
			return (head);
	}
	return (NULL);
}
