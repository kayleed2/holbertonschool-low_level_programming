# include "main.h"
/**
* rev_string - Prints string in reverse
* @s: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void rev_string(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
		if (i == 0 && *s == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
