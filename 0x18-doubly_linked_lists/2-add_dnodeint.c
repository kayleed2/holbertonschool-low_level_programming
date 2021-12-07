#include "lists.h"
/**
 * add_dnodeint - Adds new node at beginning of list
 * @head: List passed in
 * @n: Data in new element
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}
