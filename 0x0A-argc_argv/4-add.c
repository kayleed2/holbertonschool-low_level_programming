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
	int x;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		for (x = 0; argv[count][x]; x++)
		if (argv[count][x] < '0' || argv[count][x] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = atoi(argv[count]);
		}
		result = result + num;
	}
	printf("%d\n", result);
	return (result);
}
