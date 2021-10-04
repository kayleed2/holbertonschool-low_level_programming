# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
* print_triangle - Prints a triangle
* @size: Number of triangle size
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				if (col <= size - row)
				{
					printf(" ");
				}
				if (row + col >= size + 1)
				{
					printf("#");
				}
			}
				printf("\n");
		}
	}
}
