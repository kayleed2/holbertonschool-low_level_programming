# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "variadic_functions.h"
# include <stdarg.h>
/**
 * sum_them_all - Adds all ints
 * @n: Number of args
 * Return: Sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int num = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int) + num;
	}
	va_end(args);
	return (num);
}
