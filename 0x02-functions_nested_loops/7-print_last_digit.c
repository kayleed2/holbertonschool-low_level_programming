# include "main.h"
/**
*  print_last_digit - Prints last digit of num
* @i: Value to be taken last digit value from
* Description: The above
* Return: Return value should be value of last digit of i indicating success
*/

int print_last_digit(int i)
{
	i = i % 10;
	if (i >= 0)
	{
		_putchar('0' + i);
	}
	else if (i < 0)
	{
		i = i * -1;
	_putchar('0' + i);
	}
	return (i);
}
