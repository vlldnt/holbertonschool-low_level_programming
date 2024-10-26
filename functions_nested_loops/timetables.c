#include "main.h"
#include <stdio.h>
/**
 * main - salut c'est coule
 * @n: nombre donné
 */
void main(void)
{
	int x, y, n, num;
	n = 15;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			num = x * y;
			if (y != 0)
			{
				putchar(44);
				putchar(32);
	
				if (num < 10)
				{
					putchar(32);
					putchar(32);
					putchar(num + '0');
				}
				else if (num > 9 && num < 100)
				{
					putchar(32);
					putchar((num / 10) + '0');
					putchar((num % 10) + '0');
				}
				else if (num > 99)
				{
					putchar((num / 100) + '0');
					putchar((num / 10 % 10) + '0');
					putchar(num % 10 + '0');
				}
			}
			else
			putchar(num + '0');	
		}
		putchar('\n');

	}
}
