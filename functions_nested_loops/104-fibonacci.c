#include <stdio.h>
/**
* main - last exercice 98 fist fibonacci
* @:
* Return: zirow
*/

int main(void)
{
	long int first = 0, second = 1, fib = 0;
	int n;

	for (n = 0; n < 98; n++)
	{
		fib = first + second;
		first = second;
		second = fib;
		printf("%ld, \n", fib);
	}
return (0);
}
