# include <stdlib.h>
# include <stdio.h>
# include "main.h"
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
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1 = i + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2 = i + 1;
	}
	totalsize = (size1 + size2) + 1;
	p = malloc(totalsize * sizeof(s1[i]));
	if (!p)
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
