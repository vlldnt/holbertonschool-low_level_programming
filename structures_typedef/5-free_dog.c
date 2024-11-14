#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - run forest ruuun !
 * @x: the dog !
 */
void free_dog(dog_t *x)
{
	if (x)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}
