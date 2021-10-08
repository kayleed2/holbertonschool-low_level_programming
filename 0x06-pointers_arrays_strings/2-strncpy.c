# include "main.h"
/**
* _strncpy - copies a string
* @dest: Pointer to buffer
* @src: Pointer to string
* @n: number of bytes in src to print
* Description: The above
* Return: Return value is pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		else if (i == 98)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
