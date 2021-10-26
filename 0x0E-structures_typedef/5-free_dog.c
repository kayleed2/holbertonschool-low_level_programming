# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "dog.h"
/**
 * free_dog - Free the dog
 * @d: Var of struct dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
