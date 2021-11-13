#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * clear_bit - Clear bit at given index
 * @n: Num given
 * @index: Given index
 * Return: Value of bit at index
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
	{
		return (-1);
	}
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
