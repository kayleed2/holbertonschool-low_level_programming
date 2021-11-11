#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * delete_nodeint_at_index - Deletes node at index listint_t
 * @head: Pointer to list
 * @index: Index of list
 * Return: 1 or -1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node;
	unsigned int el;

	if (temp == NULL)
		return (-1);
   	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (el = 0; temp != NULL && el < index - 1; el++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);
	return (0);
}
