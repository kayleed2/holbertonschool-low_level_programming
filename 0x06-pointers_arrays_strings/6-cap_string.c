# include "main.h"
/**
* cap_string - Turns string into uppercase
* @a: String to be converted
* Description: The above
* Return: Return value is pointer to dest
*/

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] < 65 || a[i] == 92)
		{
			i++;
			if (a[i] == 32)
			{
				i++;
			}
			if (a[i] >= 65 && a[i] <= 90)
			{
			a[i] = a[i];
			}
			else if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
