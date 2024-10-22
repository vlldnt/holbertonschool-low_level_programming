#include "main.h"
#include <stdio.h>
/**
* print_alphabet - with _puthchar
*
* Return: O
*/

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	{
		_putchar('\n');
	}
}
