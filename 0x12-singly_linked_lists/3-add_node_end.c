#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds new node to list_t
 * @head: Pointer to new node for list
 * @str: Data to add
 * Return: Address of new element
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *list = *head;
	char *dup = strdup(str);
	unsigned int n = strlen(dup);

	new = (list_t *) malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = dup;
	new->len = n;
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
