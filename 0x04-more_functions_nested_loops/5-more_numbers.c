# include "main.h"
/**
* more_numbers - Prints numbers 0 to 9, not 2/4
* Description: The above
* Return: Return value should be void, with output 0-9
*/

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			_putchar(y);
			if (y > '9')
			{
				_putchar('0' + y);
			}
		}
		_putchar('\n');
	}
}
