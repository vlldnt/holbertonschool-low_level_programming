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
* _strlen - length of a string
* @s: strings to count
* Return: num to end the program
*/
int _strlen(char *s)
{
	int num = 0;

	while (*s)
	{
		num++;
		s++;
	}
return (num);
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

	new->name = malloc(_strlen(name) + 1);
	new->owner = malloc(_strlen(owner) + 1);

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
