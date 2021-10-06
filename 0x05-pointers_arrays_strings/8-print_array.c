# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
* puts_half - prints half of string
* @a: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_array(int *a, int n)
{
	int i;

	i= 0;
	while (a[0] && i < n)
	{
		if (i == n - 1)
		{
			printf("%d", *a);
			break;
		}
		else
		{
			printf("%d", *a);
			_putchar(',');
			_putchar(' ');
			a++;
			i++;
		}
	}
	_putchar('\n');
}
