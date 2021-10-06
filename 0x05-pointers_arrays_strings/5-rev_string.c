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
	int len;

	i = 0;
	len = 0
		while (s[i] != '\0')
	{
		i++;
		len++;
	}
	len--;
	for (*s = s[i - 1]; len >= s[0]; i--);
	_putchar('\n');
}
