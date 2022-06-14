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
* binary_search - Searches for value in sorted array
* @array: Pointer to 1st element
* @size: Number of elements
* @value: Value to search for
* Return: Index of value or -1 if NULL
**/

int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size;

    if (array == NULL)
            return (-1);
    
    while (low < high)
    {
        int key = (high - low) / 2 + low;
        
        printf("Searching in array: ");
        print_array(array, high);
        
        if (array[key] == value)
            return key;
        
        if (array[key] > value)
        {
            high = key - 1;
        }
        else 
        {
            low = key + 1;
        }
    }
    return (-1);
}
