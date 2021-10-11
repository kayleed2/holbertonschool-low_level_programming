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
	int i;

	i = 0;
	for (; s[i] != '\0'; s++)
	{
		if (s[i] == c)
		{
		return (s);
		}
	}
	s++;
	if (s[i] == '\0')
	{
		return ('\0');
	}
	return (0);
}
