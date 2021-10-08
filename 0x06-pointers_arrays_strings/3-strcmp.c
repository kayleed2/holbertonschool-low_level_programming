# include "main.h"
/**
* _strcmp - copies a string
* @s1: String to be compared
* @s2: String to be compared
* Description: The above
* Return: Return value is pointer to dest
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int str1v;
	int str2v;
	int result;

	for (i = 0; s1[i] != '\0'; i++);
	str1v = i;
	for (i = 0; s2[i] != '\0'; i++);
	str2v = i;
if (str1v == str2v)
{
	result = 0;
}
else if (str1v < str2v)
{
	result = str1v - str2v;
}
else if (str1v > str2v)
{
	result = str1v - str2v;
}
	return (result);
}
