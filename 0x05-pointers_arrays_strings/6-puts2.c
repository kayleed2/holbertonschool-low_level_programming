# include "main.h"
/**
* puts2 - prints every other character
* @str: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void puts2(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		if (*str == '\0')
		{
			break;
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
}
