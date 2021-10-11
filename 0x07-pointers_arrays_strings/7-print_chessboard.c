# include "main.h"
/**
* print_chessboard - Prints chessboard
* @a: String to print
* Description: The above
* Return: Return value is char
*/

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
		_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
