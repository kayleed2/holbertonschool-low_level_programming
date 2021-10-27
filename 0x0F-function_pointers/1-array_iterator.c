# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "function_pointers.h"
/**
 * array_iterator - Iterates func on array
 * @array: Array to execute on
 * @size: Size of array
 * @action: Func to call
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || (!size) || (!action))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
