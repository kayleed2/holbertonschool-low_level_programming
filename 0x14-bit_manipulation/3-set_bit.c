#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * set_bit - Sets bit at given index
 * @n: Num given
 * @index: Given index
 * Return: Value of bit at index
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
	{
		return (-1);
	}
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
