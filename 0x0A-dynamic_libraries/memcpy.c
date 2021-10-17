# include "main.h"
/**
* _memcpy - Turns string into uppercase
* @dest: Array to be copied in to
* @src: Array to copy into dest
* @n: Number of bytes in array to set
* Description: The above
* Return: Return value is char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
