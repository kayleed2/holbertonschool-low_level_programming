#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes cli args and performs op
 * @argc: Number of args passed
 * @argv: Arguments passed
 * Return: Result of performed op
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
