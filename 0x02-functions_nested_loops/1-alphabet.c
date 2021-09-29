# include "main.h"
/**
* print_alphabet - Calls alphabet function written in main.h
* Description: The above
* Return: Return value should be _putchar indicating success
*/

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
	i++;
	}
	_putchar('\n');
}
