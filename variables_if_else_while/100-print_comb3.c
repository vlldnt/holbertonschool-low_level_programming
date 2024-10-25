#include <stdio.h>

/**
* main - coucou
* @:
* Return: coucou
*/

int main(void)
{
	int n;
	int d;

	for (d = 0; d <= 9; d++)
	{
		for (n = d + 1 ; n <= 9; n++)
		{
			putchar(d + '0');
			putchar(n + '0');
			if (d == 8 && n == 9)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
return (0);
}
