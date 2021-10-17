# include "main.h"
/**
* _strpbrk - Turns string into uppercase
* @s: String to be taken prefix from
* @accept: string to be given to s
* Description: The above
* Return: Return value is char
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	while (*s != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
