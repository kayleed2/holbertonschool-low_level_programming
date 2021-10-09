# include "main.h"
/**
* reverse_array - copies a string
* @a: String to be reversed
* @n: Number of elements of array
* Description: The above
* Return: Return value is pointer to dest
*/

void reverse_array(int *a, int n)
{
	int i;
	int *b;
	int tmp;

	b = a;
	for (i = 0; i < n - 1; i++)
	{
		b++;
	}
	for (i = 0; a[i] != b[i];)
	{
		tmp = *b;
		*b = a[i];
		a[i] = tmp;
		b--;
		a++;
	}
}
