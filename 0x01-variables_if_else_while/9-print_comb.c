# include <stdio.h>
/**
 * main - putchar single digit combos
 * Description: Single digit combos w putchar and ,
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
int a;
int b;
a = 48;
b = 48;
while (a <= 57 && b <= 57)
{
	putchar(a);
	putchar(',');
	putchar(' ');
	a++;
}
return (0);
}
