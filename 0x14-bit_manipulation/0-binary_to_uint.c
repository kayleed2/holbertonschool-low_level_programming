#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to binary string
 * Return: Converted number, or 0, or NULL
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int x = 1;
	int i;
	unsigned int len = strlen(b);

	if (!b)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num + (b[i] - '0') * x;
			x = x * 2;
		}
		else
			return (0);
	}
	return (num);
}
