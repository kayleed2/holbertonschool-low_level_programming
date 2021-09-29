# include "main.h"
/**
* print_alphabet_x10 - Calls alphabet function written in main.h
* Description: The above
* Return: Return value should be _putchar indicating success
*/

void print_alphabet_x10(void)
{
	int i;
	int n;

	n = 1;
	i = 'a';

	while (n <= 10 && i <= 'z')
	{
		_putchar(i);
		i++;
		if (i > 'z')
		{
			_putchar('\n');
			i = 'a';
			n++;
		}
	}
}
