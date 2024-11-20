#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function for calculs
 * @argc: number
 * @argv: array
 * Return: numbers / NULL / exit 98
 */
int main(int argc, char *argv[])
{
	char operator;
	int num1, num2, res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = *argv[2];
	num2 = atoi(argv[3]);

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(&operator);

	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	res = func(num1, num2);
	printf("%d\n", res);

return (0);
}
