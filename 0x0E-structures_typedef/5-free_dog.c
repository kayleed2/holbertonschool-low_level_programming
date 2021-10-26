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
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
