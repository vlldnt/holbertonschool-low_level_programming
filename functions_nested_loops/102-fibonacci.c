#include <stdio.h>
/**
* main - 50 first fibonacci sequence
* @:
* Return: numbers
*/

int main(void)
{
	long int n1 = 0;
	long int n2 = 1;
	long int n3, n;

	for (n = 0; n <= 49; n++)
	{
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;

		if (n == 49)
			printf("%ld", n3);
		else
			printf("%ld, ", n3);
	}
	printf("\n");
return (0);
}
