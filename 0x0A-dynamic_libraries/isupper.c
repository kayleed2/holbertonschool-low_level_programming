# include "main.h"
/**
* _isupper - Checks if upper case letter
* @c: Value to be determined as oppercase or not
* Description: The above
* Return: Return value should be 0 or 1
*/

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;
	return (result);
}
