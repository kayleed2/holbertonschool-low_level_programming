# include "main.h"
/**
* print_most_numbers - Prints numbers 0 to 9, not 2/4
* Description: The above
* Return: Return value should be void, with output 0-9
*/

void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
