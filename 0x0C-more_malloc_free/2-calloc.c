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
	unsigned int i;
	char *p;
	unsigned int total = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(total);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		p[i] = 0;
	}
	return (p);
}
