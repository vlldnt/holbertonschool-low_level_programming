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
	int c;

	for (c = 0; c <= 7; c++)
	{
		for (d = c + 1; d <= 8; d++)
		{
			for (n = d + 1 ; n <= 9; n++)
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(n + '0');
				if (c == 7 && d == 8 && n == 9)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
return (0);
}
