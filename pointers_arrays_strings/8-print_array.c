#include "main.h"
#include <stdio.h>
/**
* print_array - print n number of an array
* @n: digit
* @a: first
* Return: coucou
*/
void print_array(int *a, int n)
{
	int i;
	
	if (n <= 0)
		printf("\n");
	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		printf("%d, ", a[i]);
	}
}
