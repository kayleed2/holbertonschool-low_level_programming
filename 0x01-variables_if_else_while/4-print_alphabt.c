# include <stdio.h>
/**
 * main - Print alphabet
 * Description: prints the alphabet in lowercase, withou q or e
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
int a;
for (a = 'a'; a <= 'z'; a++)
if (a != 'e' && a != 'q')
putchar(a);
putchar('\n');
return (0);
}
