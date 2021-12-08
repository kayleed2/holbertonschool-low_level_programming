#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: List passed in
 * @index: Index of Node
 * Return: Returns 1 0n success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *new, *temp = *head;
	unsigned int i = 0;

	if (head == NULL || !temp)
		return (-1);

	if (index == 0)
	{
		node = temp->next;
		free(temp);
		if (node != NULL)
			node->prev = NULL;
		*head = node;
		return (1);
	}
	while (temp)
	{
		if (temp == NULL)
			return (-1);
		if (i == index)
		{
			node = temp;
			temp = temp->prev;
			new = node->next;
			if (node->next != NULL)
				new->prev = temp;
			temp->next = new;
			free(node);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
