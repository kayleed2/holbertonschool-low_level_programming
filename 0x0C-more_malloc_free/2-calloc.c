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
	char *p, *q;

	nb = nmemb * size;
	q = malloc(nb);
p = q;
if ((malloc(nb)) != NULL)
{
	for (i = 0; i < nb; i++)
	{
		*p++ = 0;
	}
}
return (q);
}
