#include <stdio.h>

/**
 * main - using of the sizeof
 *
 * Return: Always 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of a char: %ld bytes(s)\n", sizeof(charType));
	printf("Size of a int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
