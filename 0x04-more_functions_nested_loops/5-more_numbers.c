# include "main.h"
/**
*  more_numbers - Prints 0-14
* Description: The above
* Return: Return value should be void  indicating success
*/

void more_numbers(void)
{
	int x;
	int y;
	int num;

for (y = 0; y < 10; y++)
{
	for (x = 0; x <= 14; x++)
	{
		num = x * 1;
		if (num <= 9)
		{
			_putchar('0' + num);
		}
		else
		{
			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
}
