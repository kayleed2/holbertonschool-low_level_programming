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
	char *dup = strdup(str);
	unsigned int n = _strlen(dup);

	if (!head || !str)
		return (NULL);
	new = (list_t *) malloc(sizeof(list_t));
	if (!new)
	{
		free(new->str);
		free(new->next);
		free(new);
		return (NULL);
	}
	new->str = dup;
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
