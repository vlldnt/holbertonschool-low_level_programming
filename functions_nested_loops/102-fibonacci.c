#include <stdio.h>
/**
* main - 50 first fibonacci sequence
* @:
* Return: numbers
*/

int main(void)
{
	long int n1 = 1;
	long int n2 = 1;
	long int n3, n;

	for (n = 1; n <= 50; n++)
	{
		if (n <= 1)
			n3 = n;
		else
		{
			n3 = n2 + n1;
			n1 = n2;
			n2 = n3;
		}
		printf("%ld, ", n3);
	}
	printf("\n");
return (0);
}
