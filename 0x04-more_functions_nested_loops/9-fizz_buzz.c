# include "main.h"
# include <stdio.h>
/**
 * main - Prints Fizz, buzz, or fizzbuzz
 * Definition: This program prints out Fizz, buzz, or fizzbuzz
 * Return: 0
 **/

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", x);
			putchar(' ');
		}
	}
}
