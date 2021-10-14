# include <stdlib.h>
# include <stdio.h>
# include "main.h"
/**
 * main - This program prints every argument
 * Return - 0 for success
 */

int main (int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s", argv[count]);
	printf("\n");
	}
	return 0;
}
