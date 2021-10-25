# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "main.h"
/**
 * _calloc - Allocates memory for array
 * @nmemb: Number of elements
 * @size: Bytes in each element
 * Return: Pointer to alloc memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, nb;
	unsigned int *p, *q;

	nb = nmemb * size;
	q = malloc(nb);
	p = q;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if ((malloc(nb)) != NULL)
	{
		for (i = 0; i < nb; i++)
		{
			*p++ = 0;
		}
	}
	else
	{
		return (NULL);
	}
	return (q);
}
