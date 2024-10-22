#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - manipulating a ASCII charaters !
 * Return: O always
*/

int main(void)
{
	char x;

	for (x = (48) ; x <= (57) ; x++)
	{
		putchar(x);
		if (x != (57))
			putchar(44);
			putchar(32);
	}
	{
		putchar('\n');
	}
	return (0);
}
