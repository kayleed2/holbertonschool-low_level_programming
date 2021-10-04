# include "main.h"
/**
* print_diagonal - Prints / n times
* @n: Number of times to print
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_diagonal(int n)
{
	int x;
	int sp;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (sp = 1; sp <= x; sp++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
	else
	{
		_putchar('\n');
	}
}
