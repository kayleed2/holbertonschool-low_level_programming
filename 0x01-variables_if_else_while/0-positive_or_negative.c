#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints random number and assigns integer type.
 * Description: This program will assign a random number to the variable n each * time it is executed. Complete the source code in order to print whether the  * number stored in the variable n is positive or negative.
 * Return: Return value should be 0 indicating success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
