# include "main.h"
/**
* puts_half - prints half of string
* @str: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void puts_half(char *str)
{
	char *copy = str;
	int i;
	int len;
	int ci;
	int n;

	i = 0;
	ci = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	len = i;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	while (ci <= len)
	{
		ci++;
		if (ci > n)
		{
			_putchar(*copy);
		}
		copy++;
	}
	_putchar('\n');
}
