# include "main.h"
/**
* _sqrt_recursion - Returns square root
* @n: Value to find square root
* Description: Value of square root through recursion
* Return: Return value is 0 or 1
*/

int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n == -1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	else if (n % 3 == 0)
	{
		return (0);
	}
	else if (n % 5 == 0)
	{
		return (0);
	}
	else if (n % 7 == 0)
	{
		return (0);
	}
	else if (n % 11 == 0)
	{
		return (0);
	}
	else
		return (1);
}
