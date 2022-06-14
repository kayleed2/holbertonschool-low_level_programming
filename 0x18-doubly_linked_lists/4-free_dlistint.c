#include "lists.h"
/**
 * free_dlistint - Adds new node at beginning of list
 * @head: List passed in
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
