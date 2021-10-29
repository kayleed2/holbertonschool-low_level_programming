# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "variadic_functions.h"
# include <stdarg.h>
/**
 * print_strings - Prints all strings
 * @separator: String between args
 * @n: Num of args
 * Return: Print strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *p = va_arg(args, char *);

		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
