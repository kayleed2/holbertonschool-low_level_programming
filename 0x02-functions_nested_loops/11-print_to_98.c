# include "main.h"
# include <stdio.h>
/**
* print_to_98 - Takes num and gets to 98
* @n: Value to get to 98
* Description: The above
* Return: Return value should be value of last digit of i indicating success
*/

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n--;
			if (n == 98)
				printf("%d\n", n);
		}
	}
	else if (n <= 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n++;
			if (n == 98)
				printf("%d\n", n);
		}
	}
}
