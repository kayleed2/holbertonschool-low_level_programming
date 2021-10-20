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

	for (i = 0; s1[i] != '\0'; i++)
	{
		size1 = i + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2 = i + 1;
	}
	totalsize = size1 + size2;
	p = malloc(totalsize * s1[i]);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i >= size1 && i <= totalsize; s2++)
	{
		p[i] = *s2;
		i++;
	}
	return (p);
}