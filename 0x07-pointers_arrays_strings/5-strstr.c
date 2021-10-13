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

	if (*needle == '\0')
	{
			return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (x = 0; needle[x] != '\0'; x++)
			{
				if (haystack[i + x] == '\0')
					break;
				if (needle[x] == haystack[i + x])
				continue;
			break;
			}
			if (needle[x] == '\0')
			{
				haystack = haystack + 1;
				return (haystack);
			}
		}
	}
	return (0);
}
