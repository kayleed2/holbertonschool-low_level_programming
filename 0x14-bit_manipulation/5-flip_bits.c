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
		return (NULL);
	}
	bit = n ^ m;
	while (bit)
	{
		i = i + (bit & 1);
		bit = bit >> 1;
	}
	return (i);
}
