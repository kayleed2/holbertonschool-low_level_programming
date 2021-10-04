# include "main.h"
/**
* print_line - Prints _ n times
* @n: Number of times to print _
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_line(int n)
{
	while (n > 0 && n <= n)
	{
		_putchar('_');
		n++;
		if (n < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
