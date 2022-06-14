#include "lists.h"
/**
 * sum_dlistint - Adds all data
 * @head: List passed in
 * Return: Returns sum of all data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
