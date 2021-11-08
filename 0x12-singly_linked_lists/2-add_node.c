#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds new node to list_t
 * @head: Pointer to new node for list
 * @str: Data to add
 * Return: Address of new element
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n = strlen(str);

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
