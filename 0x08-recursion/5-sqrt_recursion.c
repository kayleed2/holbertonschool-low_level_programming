# include "main.h"
/**
 *findsqr - takes _sqrt_recursion n and finds the square root if possible
 *@n: Number to determine if square root
 *@i: Number to multiply by itself then incr
 *Return: -1 or square root
 */

int findsqr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (findsqr(n, i + 1));
}
/**
* _sqrt_recursion - Returns square root
* @n: Value to find square root
* Description: Value of square root through recursion
* Return: Return value is square or -1
*/

int _sqrt_recursion(int n)
{
	int i;

	i = 1;

	return (findsqr(n, i));
}
