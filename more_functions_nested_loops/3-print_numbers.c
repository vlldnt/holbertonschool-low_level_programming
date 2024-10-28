#include "main.h"
/**
* print_numbers - print numbers 0 to 9 with new line after
* Return: nothing 'cause void
*/
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');
_putchar('\n');
}
