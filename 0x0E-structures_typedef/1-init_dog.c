# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "dog.h"
/**
 * init_dog - Initialize var
 * @d: Var of struct dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
