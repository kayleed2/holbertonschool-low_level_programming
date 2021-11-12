#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_binary - Prints binary
 * @n: Num to convert and print
 * Return: Void
 **/

void print_binary(unsigned long int n)
{
	int c, k;

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}
