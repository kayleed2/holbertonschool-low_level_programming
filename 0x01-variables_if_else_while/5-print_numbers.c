# include <stdio.h>
/**
 * main - Uses printf to print a string
 * Description: Uses printf to pring with proper grammar, but the outcome is a
 * piece of art, followed by a new line.
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
int x;
x = 0;
while (x <= 9)
{
printf("%d", x);
x++;
if (x > 9)
putchar('\n');
}
return (0);
}
