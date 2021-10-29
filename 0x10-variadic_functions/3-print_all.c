# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "variadic_functions.h"
# include <stdarg.h>
/**
 * pr_char - Prints char
 * @a: Char to print
 * Return: void
 */
void pr_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * pr_int - Prints int
 * @a: Int to print
 * Return: void
 */
void pr_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * pr_float - Multiplies two ints
 * @a: Float to print
 * Return: Void
 */
void pr_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * pr_str - Divides two ints
 * @a: String to print
 * Return: Result
 */
void pr_str(va_list a)
{
	char *arr = va_arg(a, char *);

	if (arr == NULL)
		arr = "(nil)";
	printf("%s", arr);
}
/**
 * print_all - Prints all
 * @format: List of types of args
 * Return: Print strings
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i, x;
	pr_t pr[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};
	va_start(args, format);

	while (format && format[x])
	{
		i = 0;
		while (i < 4 && format[x] != *(pr[i].ar))
		{
			i++;
		}
			if (i < 4)
			{
			pr[i].f(args);
			printf(", ");
			}
			x++;
	}
	va_end(args);
	printf("\n");
}
