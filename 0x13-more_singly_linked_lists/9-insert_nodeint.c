#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * insert_nodeint_at_index - Inserts node at index listint_t
 * @head: Pointer to list
 * @idx: Index of list
 * @n: Data to be added
 * Return: Sum on all data
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int index = 0;

	if (head == NULL)
		return (NULL);
	if (!new)
		return (NULL);
	temp = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head)->next;
		*head = new;
	}
	while (temp)
	{
		if (index == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
		}
		temp = temp->next;
		index++;
	}
	if (temp == NULL && index != idx - 1)
		return (NULL);
	return (new);
}
