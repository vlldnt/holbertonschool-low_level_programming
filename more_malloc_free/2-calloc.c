#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: i--
 * @size: --
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *loc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	loc = malloc(nmemb * size);

	if (loc == NULL)
	{
		return (NULL);
	}

	while (i < nmemb * size)
	{
		loc[i] = 0;
		i++;
	}
	return (loc);
}
