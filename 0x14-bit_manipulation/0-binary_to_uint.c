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
	unsigned int n = 1;
	unsigned int x = 0;
	int i;
	unsigned int len = strlen(b);

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			x += n;
		}
		n*= 2;
	}
	return (x);
}
