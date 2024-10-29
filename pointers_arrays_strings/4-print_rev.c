#include "main.h"
#include <string.h>
/**
* print_rev - okaye
* @s: coucou
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	for (i = len; i >= 0 - 1 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
