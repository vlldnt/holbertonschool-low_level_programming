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
	int i;
	int a = 0;
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			continue;
		}

		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
	a = atoi(argv[i]);
	sum += a;
	}
	printf("%d\n", sum);
return (0);
}