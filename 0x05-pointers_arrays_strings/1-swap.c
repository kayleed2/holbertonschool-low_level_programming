# include "main.h"
/**
* swap_int - Prints restates var value
* @a: Pointer to swap
* @b: Pointer to swap
* Description: The above
* Return: Return value should be void  indicating success
*/

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

