#include "main.h"
#include <stdio.h>
/**
 * main - print the number of argumentds passed into it
 * @argv: vector array string
 * @argc: number of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
return (0);
}
