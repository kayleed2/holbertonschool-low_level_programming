#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - Adds new node to listint_t
 * @head: Pointer to new node for list
 * @n: Data to add
 * Return: Address of new element or NULL
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
