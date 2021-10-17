# include <stdlib.h>
# include <stdio.h>
/**
 * main - This program prints number of arguments
 * @argc: Number of args
 * @argv: Args passed
 * Return: 0 for success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
