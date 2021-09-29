# include "main.h"
/**
*  print_last_digit - Prints last digit of num
* @i: Value to be taken last digit value from
* Description: The above
* Return: Return value should be value of last digit of i indicating success
*/

int print_last_digit(int i)
{
	int result;

	i = i % 10;
	result = _putchar(i + i);
	return (result);
}
