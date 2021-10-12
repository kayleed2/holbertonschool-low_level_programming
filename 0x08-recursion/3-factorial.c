# include "main.h"
/**
* factorial - Returns factorial of n
* @n: Number to find factorial
* Description: Factorial through recursion
* Return: Return value is void
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if ( n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
