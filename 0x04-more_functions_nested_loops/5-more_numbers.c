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
	int i;

	for (x = 0; x < 10; x++)
	{
		for (i = 1; i <= 2; i++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if (i == 2)
				{
					_putchar('1');
				}
				_putchar(y);
				if (i == 2 && y > '3')
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
