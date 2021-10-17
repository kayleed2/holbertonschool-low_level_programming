# include <stdlib.h>
# include <stdio.h>
/**
 * main - This program prints every argument
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s", argv[count]);
	printf("\n");
	}
	return (0);
}
