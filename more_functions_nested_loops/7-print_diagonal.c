#include "main.h"
/**
* print_diagonal - print n time \ every n add space
* @n: n times
*/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 1; y <= n; y++)
		{
			for (x = 1; x <= y; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
