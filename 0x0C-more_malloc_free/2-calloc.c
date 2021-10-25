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

	unsigned int **p = (unsigned int **)malloc(nmemb * sizeof(unsigned int));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = (unsigned int *)malloc(size);
	}
	return (p);
}
