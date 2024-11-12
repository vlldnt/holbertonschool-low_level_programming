#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to two dimentionnal array of interger
 * @width: width
 * @height: height
 * Return: NULL of negative or on failure or the pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int in, i;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **)malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);

	for (in = 0; in < height; in++)
	{
		array[in] = (int *)malloc(sizeof(int) * width);

		if (array[in] == NULL)
		{
			while (in--)
				free(array[in]);
			free(array);
			return (NULL);
		}

		for (i = 0; i < width; i++)
			array[in][i] = 0;
	}
	return (array);
}
