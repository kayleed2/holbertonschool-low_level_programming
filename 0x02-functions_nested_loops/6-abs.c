# include "main.h"
/**
* _abs - Calls alphabet function written in main.h
* @i: Value to convert into it's absolute
* Description: The above
* Return: Return value should be _putchar indicating success
*/

int _abs(int i)
{
	int result;

	if (i >= 0)
	{
		result = i;
			}
		else if (i < 0)
		{
			i = i * -1;
			result = i;
		}
	return (result);
}
