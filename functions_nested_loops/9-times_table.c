#include "main.h"
/**
* tiùes_table - print all time tables
* @:
* Return: will see
*/

void times_table(void)
{
	int li;
	int col;
	int num;
	
	for (col = 0; col <= 9; col++)
	{
		for (li = 0; li <= 9; li++)
		{
			num = li * col;
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			if (num <= 9)
			{
				_putchar(32);
				_putchar(num + '0');
			}
			if (li != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}	
}
