# include "main.h"
/**
* _memset - Turns string into uppercase
* @s: String to be converted
* @b: Constant byte to allocate in n number of bytes
* @n: Number of bytes in array to set
* Description: The above
* Return: Return value is char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
