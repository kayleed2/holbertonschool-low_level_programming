# include <stdio.h>
/**
 * main - Print 0-9
 * Description: prints 0-9 only int and putchar
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
int a;
for (a = 48; a <= 57; a++)
putchar(a);
putchar('\n');
return (0);
}
