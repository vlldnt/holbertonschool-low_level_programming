#include "main.h"
/**
* print_square - print square
* @size: size x size
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar(35);
		_putchar('\n');
		}
	}
}
