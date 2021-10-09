# include "main.h"
/**
* string_toupper - Turns string into uppercase
* @a: String to be converted
* Description: The above
* Return: Return value is pointer to dest
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0';)
	{
		if (a[i] >= 98 && a[i] <= 122)
		{
		a[i] = a[i] - 32;
		}
		else
		{
			a[i] = a[i];
		}
		i++;
	}
	return (a);
}
