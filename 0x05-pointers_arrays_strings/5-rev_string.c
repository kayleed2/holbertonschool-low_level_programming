# include "main.h"
/**
* rev_string - Prints string in reverse
* @s: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void rev_string(char *s)
{
	char rev;
	int i;
	int len;

	len = _strlen(s);
	for (i = len - 1; i > len / 2; i--)
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
