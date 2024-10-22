#include "main.h"

/**
 * print_sign - if greater than 0 lesser or is zero and print
 * @n: n is here to be analysed
 * Return: 0 1 and -1
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
