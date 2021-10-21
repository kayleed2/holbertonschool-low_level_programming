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
	int i;
	int x;
	int element;

	int **ptp = (int **)malloc(height * sizeof(int *));

	if (ptp == NULL)
	{
		free(ptp);
		return (NULL);
	}
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptp[i] = (int *)malloc(width * sizeof(int));
	}
	element = 0;
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			ptp[i][x] = element;
		}
	}
	return (ptp);

}
