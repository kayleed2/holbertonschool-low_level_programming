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

	if (*head == NULL)
		return (-1);
   	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}
	for (el = 0; temp != NULL && el < index - 1; el++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	node = temp->next->next;
	free(temp->next);
	temp->next = node;
	return (0);
}
