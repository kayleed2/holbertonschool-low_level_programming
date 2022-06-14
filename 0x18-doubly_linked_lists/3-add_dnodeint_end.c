#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at end of list
 * @head: List passed in
 * @n: Data in new element
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *copy = *head;

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (copy->next != NULL)
	{
		copy = copy->next;
	}
	copy->next = newnode;
	newnode->prev = copy;

	return (newnode);
}
