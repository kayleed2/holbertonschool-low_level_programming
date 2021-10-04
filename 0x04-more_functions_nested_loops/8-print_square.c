# include "main.h"
/**
* print_square - Prints # n times
* @size: Number of square size
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1; x <= size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
