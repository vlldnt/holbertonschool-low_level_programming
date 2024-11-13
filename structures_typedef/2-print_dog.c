#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print a struct
 * @d: the strucuture to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)");
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Owner: %s\n", d->owner);
}
