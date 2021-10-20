# include <stdlib.h>
# include <stdio.h>
# include "main.h"
/**
 * _strdup - This function creates an array
 * @str: string to be copied
 * Return: pointer to array, Null if str is null
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size = i + 1;
	}
	p = malloc((size + 1) * sizeof(str[i]));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
