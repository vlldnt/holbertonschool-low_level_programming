#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	if (new->name == 0)
	{
		free(new->name);
		return (NULL);
	}
	new->owner = malloc(sizeof(owner) + 1);
	if (new->owner == 0)
	{
		free(new->owner);
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;

return (new);
}
