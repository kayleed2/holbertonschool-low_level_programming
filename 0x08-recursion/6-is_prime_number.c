# include "main.h"
/**
* is_prime_number - Returns 0 or 1 depending on prime
* @n: Value to see if prime
* Description: Prime or not
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
