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
* advanced_binary - Searches for value in sorted array
* @array: Pointer to 1st element
* @size: Number of elements
* @value: Value to search for
* Return: Index of value or -1 if NULL
**/

int advanced_binary(int *array, size_t size, int value)
{   
    if (array == NULL)
        return (-1);

    while (size >= 1) 
    {
        int key = size / 2;

        printf("Searching in array: ");
        print_array(array, size);

        if (array[key] == value)
            return (key);

        if (array[key] > value) 
        {
            return (advanced_binary(array, key - 1, value));
        }
        else 
        {
            return (advanced_binary(array + key, key, value));
        }
    }

    return (-1);
}
