#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the product of numbers
 * @argv: vecyot
 * @argc: number of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res;

	argc = argc;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d\n", res);

return (0);
}
