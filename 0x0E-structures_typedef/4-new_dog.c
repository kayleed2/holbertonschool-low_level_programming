# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "dog.h"
/**
 * new_dog - Creates new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Returns dog_t or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
