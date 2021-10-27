# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: Name to print
 * @f: Function pointer
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
