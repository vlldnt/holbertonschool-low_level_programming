#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - add integer from argv
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0 as always
 */
int main(int argc, char *argv[])
{
	int i, j;
	int a = 0;
	int sum = 0;

	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
				a = a * 10 + argv[i][j] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += a;
	a = 0;
	}
	printf("%d\n", sum);
return (0);
}
