#include "main.h"
/**
* puts2 - olala one on two numbers
* @str: strings
* Return:
*/
void puts2(char *str)
{
	int len = 0;
	int i;

	while (*str)
	{
		len++;
		str++;
	}

	str -= len;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
