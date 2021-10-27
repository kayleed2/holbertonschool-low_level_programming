#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes cli args and performs op
 * @arc: Number of args passed
 * @argv: Arguments passed
 * Return: Result of performed op
 */

int main(int argc, char *argv[])
{
	int (*get_op_func(char *s))(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
