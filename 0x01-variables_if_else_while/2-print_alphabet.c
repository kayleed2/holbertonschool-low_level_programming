# include <stdio.h>
/**
 * main - Print alphabet
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
putchar('\n');
return (0);
}
