# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
* print_diagsums - Prints sum of two diags
* @a: Array to add diags
* @size: Size of the array
* Description: The above
* Return: Return value is char
*/

void print_diagsums(int *a, int size)
{
	int i;
	int x;

	for (x = 0; x < size; x++)
	{
		for (i = 0; i < size; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("\n");
		a = a + 3;
	}
}
