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
	unsigned int i;
	unsigned int x;
	char *first;

	for (i = 0; s[i] != '\0'; i++)
	{
		s++;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				first = s;
				return (first);
			}
		}
		if (accept[x] == '\0')
		{
			first = &accept[x];
		}
	}
	return (first);
}
