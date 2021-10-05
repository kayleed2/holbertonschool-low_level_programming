# include "main.h"
/**
* _strlen - Prints restates var value
* @s: String to determine length
* Description: The above
* Return: Return value should be void  indicating success
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(++s));
}

