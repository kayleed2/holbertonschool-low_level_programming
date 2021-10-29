# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "variadic_functions.h"
# include <stdarg.h>
/**
 * print_all - Prints all
 * @format: List of types of args
 * Return: Print strings
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int len = strlen(format);

	va_start(args, format);

	while (i < len)
	{
		if (format[i] == 'i')
		{
			int n = va_arg(args, int);

			printf("%d", n);
		}
		else if (format[i] == 'c')
		{
			int n = va_arg(args, int);

			printf("%c", n);
		}
		if (format[i] == 'f')
		{
			double n = va_arg(args, double);

			printf("%f", n);
		}
		else if (format[i] == 's')
		{
			char *n = va_arg(args, char *);

			printf("%s", n);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
