# include "main.h"
/**
* _isalpha - Checks if variable is a letter
* @c: Value to be determined as a letter
* Description: The above
* Return: Return value should be 0 or 1
*/

int _isalpha(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;
	return (result);
}
