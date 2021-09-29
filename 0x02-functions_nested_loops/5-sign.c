# include "main.h"
/**
* print_sign - Checks if variable is a letter
* @n: Value to be determined as less than, eq, or > 0
* Description: The above
* Return: Return value should be 0 or 1
*/

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
	_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
	_putchar('0');
	}
	else if (n < 0)
	{
		result = -1;
	_putchar('-');
	}
	return (result);
}
