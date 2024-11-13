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

	if (min > max)
		return (NULL);

	array = malloc(max - min);

	if (array == NULL)
		return (NULL);

	for (; min <= max; min++)
		array[min] = 
}
