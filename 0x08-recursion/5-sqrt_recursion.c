# include "main.h"
/**
* _sqrt_recursion - Returns square root
* @n: Value to find square root
* Description: Value of square root through recursion
* Return: Return value is void
*/

int _sqrt_recursion(int n)
{
	int i;

	i = n % 1;
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (n);
}
