#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints random number and assigns integer type.
* Description: Assign a random number to the variable n each execution.
* Return: Return value should be 0 indicating success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5 && n % 10 > 0)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else if (n % 10 < 6 && n % 10 != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
