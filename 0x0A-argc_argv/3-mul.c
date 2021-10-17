# include <stdlib.h>
# include <stdio.h>
/**
 * main - This program multiplies arguments
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 for success, Error for more than 2 args
 */

int main(int argc, char *argv[])
{
	int count;
	int num;
	int result;

	result = 1;
	for (count = 1; count < argc; count++)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[count]);
		result = result * num;
	}
		printf("%d\n", result);
		return (0);
}
