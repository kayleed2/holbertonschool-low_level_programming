# include <stdlib.h>
# include <stdio.h>
# include "main.h"
# include <string.h>
/**
 * alloc_grid - pointer to 2D int array
 * @width: grid width
 * @height: grid height
 * Return: Null if width/height is neg or 0 or pointer
 */

int **alloc_grid(int width, int height)
{
	int *p;
	int i;
	int x;

	p = malloc((height * width) * sizeof(int));

	for (i = 0; i <= height; i++)
	{
		for (x = 0; x <= width; x++)
		{
			p[x] = 0;
			if (p[x] == width)
			{
				_putchar('\n');
			}
		}
	}
	return (p);
}
