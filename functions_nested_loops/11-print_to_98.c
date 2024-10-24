#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print increment or decrement or 98
* @n: for print it
* Return: 0 always here too
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			n--;
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			n++;
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
}
