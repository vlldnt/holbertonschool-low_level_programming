#include <stdio.h>
#include "dog.h"
/**
 * init_dog - my_dog initialization
 * @d: name of struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
