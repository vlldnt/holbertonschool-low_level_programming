#include "main.h"

/**
 * get_bit - return value of a bit at a given value
 * @n: number received
 * @index: index wanted
 * Return: value of the number at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int lol;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	lol = 1 << index;
return ((n & lol) != 0);
}

