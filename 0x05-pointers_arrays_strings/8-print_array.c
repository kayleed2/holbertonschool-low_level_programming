# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
* print_array - prints number of values
* @n: String elements to be printed
* @a: Array to be evaluated
* Description: The above
* Return: Return value should be void  indicating success
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[0] && i < n)
	{
		if (n * 1 == -n || n <= 1)
		{
			break;
		}
		if (i == n - 1)
		{
			printf("%d\n", *a);
			break;
		}
		else
		{
			printf("%d, ", *a);
			a++;
			i++;
		}
	}
}
