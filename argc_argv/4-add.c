#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add interger from argv
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 as always
 */
int main(int argc, char *argv[])
{
	int i, b;
	int a = 0;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		b = atoi(argv[i]);
		if (b < 0)
		{
			continue;
		}

		if (!b)
		{
			printf("Error\n");
			return (1);
		}
	a = b;
	sum += a;
	}
	printf("%d\n", sum);
return (0);
}
