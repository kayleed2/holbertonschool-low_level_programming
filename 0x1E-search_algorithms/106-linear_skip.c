#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
size_t i;

i = 0;
while (array && i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
++i;
}
printf("\n");
}

/**
* linear_skip - Searches for value in sorted array
* @array: Pointer to 1st element
* @size: Number of elements
* @value: Value to search for
* Return: Index of value or -1 if NULL
**/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (!list)
       printf("%s", "nil"); 

    value = 20;
    return(list);
}
