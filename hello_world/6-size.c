#include <stdio.h>

/**
 * main - using of the sizeof
 *
 * Return: Always 0
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	double doubleType;

	printf("The size of int:  %d bytes\n", sizeof(intType));
	printf("The size of int:  %d bytes\n", sizeof(charType));
	printf("The size of int:  %d bytes\n", sizeof(floatType));
	printf("The size of int:  %d bytes\n", sizeof(doubleType));
	return (0);
}
