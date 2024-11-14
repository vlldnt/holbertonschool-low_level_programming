#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy, *ocpy;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(ncpy, name);
	strcpy(ocpy, owner);

	new->ncpy = malloc(sizeof(name) + 1);
	new->ocpy = malloc(sizeof(owner) + 1);

	if (new->ncpy == NULL || new->ocpy == NULL)
	{
		free(new->ncpy);
		free(new->ocpy);
		free(new);
		return (NULL);
	}
	new->name = ncpy;
	new->owner = ocpy;
	new->age = age;
return (new);
}
