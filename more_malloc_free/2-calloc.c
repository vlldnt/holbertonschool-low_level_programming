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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	loc = malloc(nmemb * size);
	if (loc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		loc[i] = 0;
		i++;
	}
	return (loc);
}
