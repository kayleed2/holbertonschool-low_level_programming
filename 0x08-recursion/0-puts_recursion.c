# include "main.h"
/**
* _puts_recursion - Turns string into uppercase
* @s: String to be printed
* Description: Puts through recursion
* Return: Return value is void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
