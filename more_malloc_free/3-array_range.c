#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of string
 * @min: from value
 * @max: to value
 * Return: 0 or NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int nmin;
	int i = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	nmin = min;

	for (; nmin <= max; nmin++)
	{
		array[i] = nmin;
		i++;
	}
return (array);
}
