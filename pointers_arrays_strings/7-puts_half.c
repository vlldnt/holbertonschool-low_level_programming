#include "main.h"
/**
* puts_half - cut the and print the second part of the string
* @str: :)
* Return: void
*/

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (*str)
	{
		str++;
		len++;
	}

	n = (len - 1) / 2;
	str = str - len;

	while (n < len - 1)
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
