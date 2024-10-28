#include "main.h"
/**
* print_line - print (n) line with \n at the end
* @n: number of lines
* Return: 0
*/
void print_line(int n)
{
	int li;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (li = 1; li <= n; li++)
			_putchar(95);
		_putchar('\n');
	}
}
