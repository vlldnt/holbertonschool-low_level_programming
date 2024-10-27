#include <stdio.h>
/**
* main - sum of the even of fibonacci sequence until fibonacci < 4000000
* @:
* Return: nothing
*/
int main(void)
{
	long int first = 0;
	long int second = 1;
	long int fib = 0;
	long int n = 0;

	while (fib < 4000000)
	{
		fib = first + second;
		first = second;
		second = fib;
		if (fib % 2 == 0)
			n = n + fib;
	}
	printf("%ld\n", n);
return (0);
}
