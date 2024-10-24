#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print increment or decrement or 98
* @n: for print it
* Return: 0 always here too
*/

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else
		if (n > 98)
			for (; n >= 98; n--)
				if (n != 98)
					printf("%d ,", n);
				else
					printf("%d", n);
		else
			for (; n <= 98; n++)
				if (n != 98)
					printf("%d ,", n);
				else
					printf("%d", n);
	printf("\n");

}
