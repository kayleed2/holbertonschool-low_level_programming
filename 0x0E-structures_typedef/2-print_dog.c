# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "dog.h"
/**
 * print_dog - Prints struct dog
 * @d: Var of struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *n = "(nil)";

	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", n);
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %s\n", n);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", n);
	else
		printf("Owner: %s\n", d->owner);
}
