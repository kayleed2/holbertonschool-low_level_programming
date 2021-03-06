#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_bit - Gets bit at given index
 * @n: Num given
 * @index: Given index
 * Return: Value of bit at index
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
