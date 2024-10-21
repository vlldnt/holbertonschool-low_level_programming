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

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	{
		putchar('\n');
	}
		return (0);
}
