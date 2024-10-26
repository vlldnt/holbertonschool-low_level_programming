#include "main.h"
/**
 * print_times_table - salut c'est coule
 * @n: nombre donné
 */
void print_times_table(int n)
{
	int x, y, num;

	if (n > 16 || n < 0)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			num = x * y;
			if (y != 0)
			{
				_putchar(44);
				_putchar(32);
				if (num < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(num + '0');
				}
				else if (num > 9 && num < 100)
				{
					_putchar(32);
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else if (num > 99)
				{
					_putchar((num / 100) + '0');
					_putchar((num / 10 % 10) + '0');
					_putchar(num % 10 + '0');
				}
			}
			else
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
