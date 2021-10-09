# include "main.h"
/**
* _strcmp - copies a string
* @s1: String to be compared
* @s2: String to be compared
* Description: The above
* Return: Return value is pointer to dest
*/

int _strcmp(char *s1, char *s2)
{

	if (*s1 - *s2 == 0)
		return (0);
	else
		return (*s1 - *s2);
}
