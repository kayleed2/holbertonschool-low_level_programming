# include <stdlib.h>
# include <stdio.h>
# include "main.h"
/**
 * malloc_checked - Aloocates memory
 * @b: Amount of memory to allocate
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
