#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Frees list_t
 * @head: Pointer to list
 * Return: void
 **/

void free_list(list_t *head)
{
	list_t *actual = head;
	list_t *next;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual);
		actual = next;
	}
	free(next);
}
