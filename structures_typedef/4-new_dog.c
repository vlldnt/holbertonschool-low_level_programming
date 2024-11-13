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

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(name) + 1);
	new->owner = malloc(sizeof(owner) + 1);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = name;
	new->owner = owner;
	new->age = age;
return (new);
}
