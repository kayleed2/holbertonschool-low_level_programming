#include "main.h"
/**
* _isdigit - Checks for digit 0-9
* @c: Value to be determined as digit or not
* Description: The above
* Return: Return value should be 0 or 1
*/

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	  {
		result = 1;
	  }
	else
	  {
		result = 0;
	  }
	return (result);
}
