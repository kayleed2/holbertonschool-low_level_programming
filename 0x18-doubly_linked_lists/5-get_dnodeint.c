#include "lists.h"
/**
 * get_dnodeint_at_index - Finds nth node of list
 * @head: List passed in
 * @index: nth node
 * Return: Returns nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head || !index)
		return (NULL);

	while (head)
	{
		head = head->next;
		i++;
		if (i == index)
			return (head);
	}
	return (NULL);
}
