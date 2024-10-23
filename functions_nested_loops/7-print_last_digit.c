#include "main.h"
/**
* print_last_digit -  print the last digit of a number
* @n: modulus here
* Return: is zero here
*/

int print_last_digit(int n)
{
       int l = n % 10;
	if (l < 0)
	{
		_putchar(-l);
		return (-l);
	}
	else if (l >= 0)
	{
		_putchar(l);
		return (l);
	}
	return (0);
}
