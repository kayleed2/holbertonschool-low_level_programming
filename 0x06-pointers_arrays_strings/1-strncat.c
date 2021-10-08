# include "main.h"
/**
* _strncat - prints number of values
* @dest: Pointer to buffer
* @src: Pointer to string
* @n: number of bytes in src to print
* Description: The above
* Return: Return value is pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *con;
	int dlen;
	int slen;
	int i;
	int byte;

	con = dest;
	for (i = 0; src[i] != '\0'; i++)
	{
		slen = i;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dlen = i;
	}
	for (i = 0; i <= dlen; i++)
	{
		dest++;
	}
	byte = dlen + n;
	while (i >= dlen && i <= byte)
	{
		if (n >= slen + byte)
		{
			break;
		}
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (con);
}
