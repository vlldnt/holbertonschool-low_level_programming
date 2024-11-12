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
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
return (array);
}
