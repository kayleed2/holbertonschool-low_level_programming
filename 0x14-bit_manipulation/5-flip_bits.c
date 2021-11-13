#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * flip_bits - From one num to another
 * @n: Num given
 * @m: Num to convert to
 * Return: Number of bits to flip
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	unsigned int i = 0;

	if (!n || !m)
	{
		return ('\0');
	}
	bit = n ^ m;
	while (bit > 0)
	{
		i++;
		bit = bit & (bit - 1);
	}
	return (i);
}
