#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display al alphabet
 * Return: O always
*/

int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	{
		putchar('\n');
	}
		return (0);
}
