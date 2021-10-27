# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "function_pointers.h"
/**
 * function_iterator - Iterates func on array
 * @array: Array to execute on
 * @size: Size of array
 * @action: Func to call
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
