# include "main.h"
/**
* _strlen - Prints restates var value
* @s: String to determine length
* Description: The above
* Return: Return value should be void  indicating success
*/

int _strlen(char *s)
{
	for (count = 0; *s != '\0'; count ++)
		s++;
	return (count);
}

