# include "main.h"
/**
* _strcpy - prints number of values
* @dest: Pointer to buffer
* @src: Pointer to string
* Description: The above
* Return: Return value is pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	dest = src;

	for (i = 0; src[0] <= '\0'; i++)
	{
		if (src[i] == '\0')
			{
			break;
			}
			src++;
	}
	len = i;
	for (i = 0; dest[i] <= len; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		dest++;
	}
	return (dest);
}
