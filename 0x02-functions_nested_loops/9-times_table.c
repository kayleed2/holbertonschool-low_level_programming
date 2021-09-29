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

	x = '0';
	y = '0';
	while (x == '0' && y < '9')
	{
		_putchar(' ');
		_putchar(x);
		_putchar(',');
		y++;
	}
	_putchar('\n');
}
