#include "main.h"
/**
 * _puts - print strings fucnion put re writed
 * @str: strings to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
