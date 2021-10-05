# include "main.h"
/**
* _puts - Prints restates var value
* @str: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str)
			str++;
	}
	_putchar('\n');
}
