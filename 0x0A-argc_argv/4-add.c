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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		num = atoi(argv[count]);
		if (num == '\0')
		{
			if (num != 0)
			{
			printf("Error\n");
			return (1);
			}
			else
			{
				result = result + num;
				printf("%d\n", result);
				return (0);
			}
		}
		result = result + num;
	}
		printf("%d\n", result);
		return (0);
}
