# include "main.h"
/**
* _strstr - Turns string into uppercase
* @haystack: String we are looking in
* @needle: Substring we are looking for
* Description: The above
* Return: Return value is char
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;

	i = 0;

	if (*needle == '\0')
	{
			return (haystack);
	}
	while (haystack[i] != '\0')
	{
			for (x = 0; needle[x] != '\0'; x++)
			{
				if (haystack[i + x] != needle[x])
				{
					break;
				}
				if (needle[x + 1] == '\0')
				{
					return (haystack + i);
				}
		}
			i++;
	}
	return ('\0');
}
