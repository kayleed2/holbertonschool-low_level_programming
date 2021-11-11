#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pop_listint - Deletes head node listint_t
 * @head: Pointer to list
 * Return: Head node's data or 0
 **/

int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head)->next;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
