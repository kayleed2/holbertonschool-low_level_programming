#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/**
 * op_add - Adds two ints
 * @a: int 1
 * @b: int 2
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two ints
 * @a: int 1
 * @b: int 2
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two ints
 * @a: int 1
 * @b: int 2
 * Return: Product
 */
int op_mul(int a, int b)
{
	return  (a * b);
}

/**
 * op_div - Divides two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Mods two ints
 * @a: int 1
 * @b: int 2
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
