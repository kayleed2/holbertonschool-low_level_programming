#include "lists.h"
/**
 * get_dnodeint_at_index - Finds nth node of list
 * @head: List passed in
 * @index: nth node
 * Return: Returns nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp)
	{
		if (temp == NULL)
			return (NULL);
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
