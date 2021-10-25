# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "main.h"
/**
 * array_range - Creates array of integers
 * @min: Min value
 * @max: Max value
 * Return: Pointer to new array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;
	int total = (max - min) + 1;

	if (min > max)
	{
		return ('\0');
	}
	p = malloc(total * sizeof(int));
	if (!p)
	{
		return ('\0');
	}
	for (i = 0; i <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
