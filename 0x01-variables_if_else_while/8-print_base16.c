# include <stdio.h>
/**
 * main - Print alphabet
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
char a;
char b;
a = '0';
b = 'a';
while (a >= '0' && a <= '9')
{
putchar(a);
a++;
}
while (b >= 'a' && b <= 'f')
{
putchar(b);
b++;
}
if (b > 'f')
putchar('\n');
return (0);
}
