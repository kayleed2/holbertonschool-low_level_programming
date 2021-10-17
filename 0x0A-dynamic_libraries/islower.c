# include "main.h"
/**
* _islower - Calls alphabet function written in main.h
* @c: Value to be determined as lowercase or not
* Description: The above
* Return: Return value should be 0 or 1
*/

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
