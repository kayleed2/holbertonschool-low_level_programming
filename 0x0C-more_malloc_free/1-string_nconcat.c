# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "main.h"
/**
 * string_nconcat - Aloocates memory
 * @s1: String 1
 * @s2: String 2
 * @n: Bytes of s2
 * Return: Char array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int x, y, total;
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);

	total = size1 + size2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new = malloc(total * sizeof(char) + 1);
	if (!new)
		return (NULL);
	for (x = 0; x < size1; x++)
	{
		new[x] = s1[x];
	}
	for (y = 0; y <= n; y++)
	{
		if (n >= size2)
		{
			n = size2;
		}
		else
		{
			new[x] = s2[y];
			x++;
			if (y == n)
			{
				new[x] = '\0';
				break;
			}
		}
	}
return (new);
}
