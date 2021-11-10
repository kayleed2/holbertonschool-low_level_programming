#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sum_listint - Sums all data of listint_t
 * @head: Pointer to list
 * Return: Sum on all data
 **/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp)
	{
		n = n + (temp->n);
		temp = temp->next;
	}
	return (n);
}
