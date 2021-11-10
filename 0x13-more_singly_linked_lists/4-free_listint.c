#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - Frees listint_t
 * @head: Pointer to list
 * Return: Void
 **/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
