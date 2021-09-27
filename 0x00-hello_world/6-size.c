# include <stdio.h>
/**
 * main - Uses sizeof to print type sizes
 * Description: Uses sizeof to print size of various types on this computer.
 * Return: Return value should be 0 indicating success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

a = sizeof(a);
b = sizeof(b);
c = sizeof(c);
d = sizeof(d);
e = sizeof(e);

printf("Size of a char: %d byte(s)\n", a);
printf("Size of an int: %d byte(s)\n", b);
printf("Size of a long int: %ld byte(s)\n", c);
printf("Size of a long long int: %lld byte(s)\n", d);
printf("Size of a float: %.0f byte(s)\n", e);
return (0);
}
