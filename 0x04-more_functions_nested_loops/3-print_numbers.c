# include "main.h"
/**
* print_numbers - Prints numbers 0 to 9
* Description: The above
* Return: Return value should be void, with output 0-9
*/

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
	i++;
	}
	_putchar('\n');
}
