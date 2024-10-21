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
	long long int longLongIntType;
	long int longIntType;
	float floatType;

	printf("The size of int:  %ld bytes\n", sizeof(intType));
	printf("The size of float: %ld bytes\n", sizeof(floatType));
	printf("The size of char:  %ld bytes\n", sizeof(charType));
	printf("The size of long int:  %ld bytes\n", sizeof(longIntType));
	printf("The size of long long int:  %ld bytes\n", sizeof(longLongIntType));
	return (0);
}
