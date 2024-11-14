#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strcpy - get stringds and copy then and return them
* @dest: destination
* @src: source
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src)
	{
		len++;
		src++;
	}

	src = src - len;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
return (dest);

}
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

	if (new == 0)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(strlen(name) + 1);
	new->owner = malloc(strlen(owner) + 1);

	if (new->name == 0 || new->owner == 0)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	_strcpy(new->name, name);
	new->age = age;
	_strcpy(new->owner, owner);

return (new);
}
