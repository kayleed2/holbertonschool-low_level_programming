# include "main.h"
/**
* puts_half - prints half of string
* @str: String to be printed
* Description: The above
* Return: Return value should be void  indicating success
*/

void puts_half(char *str)
{
char *copy = str;
int i;
int len;
int ci;
int n;

i = 0;
ci = 0;
while (*str != '\0')
{
i++;
str++;
}
len = i;
while (*copy != '\0')
{
ci++;
copy++;
if (len % 2 == 0)
{
while (ci >= len / 2)
{
_putchar(*copy);
}
}
else
{
while (ci >= n)
{
_putchar(*copy);
}
_putchar('\n');
}
