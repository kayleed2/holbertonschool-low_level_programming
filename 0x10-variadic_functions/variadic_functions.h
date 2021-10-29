#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct pr - Struct of Print func
 *
 * @ar: Argument passed
 * @f: The function associated
 */
typedef struct pr
{
	char *ar;
	void (*f)(va_list);
} pr_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_char(va_list args);
void pr_int(va_list args);
void pr_float(va_list args);
void pr_str(va_list args);

#endif
