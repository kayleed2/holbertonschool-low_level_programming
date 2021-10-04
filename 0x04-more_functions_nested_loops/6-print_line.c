# include "main.h"
/**
* print_line - Prints _ n times
* @n: Number of times to print
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_line(int n)
{
	int num;

	for (num = 1; num <= n; num++)
	{
		_putchar('_');
		if (n < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
