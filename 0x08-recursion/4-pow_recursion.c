# include "main.h"
/**
* _pow_recursion - Returns x to the y
* @x: Value to be raised
* @y: Value to raise to
* Description: Value of power to through recursion
* Return: Return value is void
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
