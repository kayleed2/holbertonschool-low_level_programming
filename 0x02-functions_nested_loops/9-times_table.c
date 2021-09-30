# include "main.h"
/**
*  times_table - Prints last digit of
* Description: The above
* Return: Return value should be value of last digit of i indicating success
*/

void times_table(void)
{
	int x;
	int y;
	int num;

for (y = 0; y < 10; y++)
{
	_putchar('0');
	for (x = 0; x < 10; x++)
	{
		_putchar(',');
		_putchar(' ');
		num = y * x;
		if (num <= 9)
			_putchar(' ');
		else
			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
}
