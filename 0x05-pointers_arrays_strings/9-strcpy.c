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

	dest = src;

	for (i = 0; src[0] <= '\0'; i++)
	{
		dest = src;
	}
	return (dest);
}
