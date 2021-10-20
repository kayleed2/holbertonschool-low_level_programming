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
	int size1;
	int size2;
	int totalsize;

	if (s1[0] == '\0')
	{
		s1 = "";
	}
	if (s2[0] == '\0')
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
		return ('\0');
	}
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		p[i + size1] = s2[i];
	}
	return (p);
}
