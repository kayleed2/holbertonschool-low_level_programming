# include "main.h"
/**
* _strspn - Turns string into uppercase
* @s: String to be taken prefix from
* @accept: string to be given to s
* Description: The above
* Return: Return value is char
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				break;
			}
		}
		if (accept[x] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
