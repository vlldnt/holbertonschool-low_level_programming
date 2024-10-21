#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display al alphabet
 * Return: O always
*/

int main(void)
{
	char y;
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	for (y = 'a' ; y <= 'f' ; y++)
	{
		putchar(y);
	}
	{
		putchar('\n');
	}
		return (0);
}
