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
	int loop;

	i = 0;
	loop = 1;

	if (loop < 2)
	{
		while (*s != '\0')
		{
			_putchar(*s);
			i++;
			s++;
		}
		_putchar('\n');
		i--;
		s--;
		while (i > 0)
		{
			_putchar(*s);
			i--;
			s--;
		}
	_putchar('\n');
	loop++;
	}
}
