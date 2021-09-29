# include "main.h"
/**
* _islower - Calls alphabet function written in main.h
* @c: Value to be determined as lowercase or not
* Description: The above
* Return: Return value should be 0 or 1
*/

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
}
