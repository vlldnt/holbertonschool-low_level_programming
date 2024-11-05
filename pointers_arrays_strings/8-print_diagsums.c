#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the diagonal
 * @a: coucou
 * @size : petit hibou
 */
void print_diagsums(int *a, int size)
{
	int j = size - 1;
	int sum = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum += a[i];
		i++;
		sum2 += a[j];
		j--;
		a += size;
	}
	printf("%d, %d\n", sum, sum2);
}
