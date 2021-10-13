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
		if (a[i] >= 'a' && a[i] <= 'z')
		{

			if (i == 0)
			{
				a[i] = a[i] - 32;
			}
			if (a[i - 1] == '\t' || a[i - 1] == ' ' || a[i - 1] == '\n')
			{
			a[i] = a[i] - 32;
			}
			if (a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.')
			{
				a[i] = a[i] - 32;
			}
			if (a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"')
			{
				a[i] = a[i] - 32;
			}
			if (a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{')
			{
				a[i] = a[i] - 32;
			}
			if (a[i - 1] == '}')
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
