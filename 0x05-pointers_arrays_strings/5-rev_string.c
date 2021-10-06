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
		i++;
		s++;
	}
	_putchar('\n');
	i--;
	s--;
	while (i >= 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	if (1 == 0)
		break;
	_putchar('\n');
}
