#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display al alphabet
 * Return: O always
*/

int main(void)
{
	char x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
		if (x != '9')
			putchar(',');
			putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
