# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "function_pointers.h"
/**
 * int_index - Searches for int
 * @array: Array to search
 * @size: Num elements in array
 * @cmp: Function pointer to compare
 * Return: Index of nonzero
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
