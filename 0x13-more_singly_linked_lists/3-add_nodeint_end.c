#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - Adds new node to end of listint_t
 * @head: Pointer to new node for list
 * @n: Data to add
 * Return: Address of new element or NULL
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *list = *head;

	if (!head)
		return (NULL);
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
	return (new);
}
