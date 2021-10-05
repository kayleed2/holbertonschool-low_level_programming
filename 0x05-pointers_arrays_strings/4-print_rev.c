# include "main.h"
/**
* print_rev - Prints string in reverse
* @s: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (*s >= 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
