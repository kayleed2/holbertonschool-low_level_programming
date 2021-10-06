# include "main.h"
/**
* puts2 - prints every other character
* @str: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str != '0')
		{
			str++;
		}
		if (str == '\0')
			break;
	}
	_putchar('\n');
}
