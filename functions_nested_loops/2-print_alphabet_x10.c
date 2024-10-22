#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - with _puthcharx10
*
* Return: O
*/

void print_alphabet_x10(void)
{
	char c;
	char x;

	for (c = 48; c <= 57 ; c++)
	{
		{
		for (x = 97; x <= 122; x++)
			_putchar(x);
		}
		_putchar('\n');
	}
}
