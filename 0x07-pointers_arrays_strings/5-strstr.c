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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
