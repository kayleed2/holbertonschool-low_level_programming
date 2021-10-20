# include <stdlib.h>
# include <stdio.h>
# include "main.h"
# include <string.h>
/**
 * str_concat - Concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to array, Null if  null
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int x;
	int size1;
	int size2;
	int totalsize;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	totalsize = size1 + size2;
	p = malloc((totalsize + 1) * sizeof(s1[i]));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		p[i] = s2[x];
		i++;
	}
	return (p);
}
