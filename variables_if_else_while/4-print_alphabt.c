#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - alphabet woth e and q
 * Return: O always
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		putchar(x);
	}
	{
		putchar('\n');
	}
		return (0);
}
