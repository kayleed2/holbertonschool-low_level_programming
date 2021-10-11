# include "main.h"
/**
* _strchr - Turns string into uppercase
* @s: String to be searched
* @c: Character to locate
* Description: The above
* Return: Return value is char
*/

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *first;

	i = 0;

	while (s[i] != c)
	{
		s++;
		first = s;
		if (s[i] == '\0')
			return ('\0');
	}
	return (first);
}
