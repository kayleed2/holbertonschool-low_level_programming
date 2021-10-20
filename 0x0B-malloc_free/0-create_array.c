# include <stdlib.h>
# include <stdio.h>
# include "main.h"
/**
 * create_array - This function creates an array
 * @size: size of int
 * @c: element
 * Return: pointer to array, Null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	p = malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (*p);
}
