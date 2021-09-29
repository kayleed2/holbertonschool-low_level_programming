# include <stdio.h>
/**
 * main - putchar single digit combos
 * Description: Single digit combos w putchar and ,
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
int a;
a = '0';
while (a <= '9')
{
	putchar(a);
	if (a != '9')
	putchar(',');
	putchar(' ');
	a++;
}
	putchar('\n');
return (0);
}
