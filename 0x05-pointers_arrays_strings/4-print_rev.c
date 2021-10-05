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
	int len;

	i = 0;
	len = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	len = i - 1;
	while (len >= 0)
	{
	_putchar(*s);
	}
}

