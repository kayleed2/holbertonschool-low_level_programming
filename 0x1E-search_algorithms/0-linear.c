#include "search_algos.h"


/**
* linear_search - Searches for value in array if ints
* @array: Pointer to 1st element
* @size: Number of elements
* @value: Value to search for
* Return: Index of value or -1 if NULL
**/

int linear_search(int *array, size_t size, int value) 
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
