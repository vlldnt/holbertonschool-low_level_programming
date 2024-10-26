#include <stdio.h>
/**
* main - show the sum of the multiple of 3 and 5 between 0 and 1024
* @:
* Return: zirow
*/

int main(void)
{
	int n = 0;
	int total = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			total += n;
	n++;
	}
	printf("%d\n", total);
return (0);
}
