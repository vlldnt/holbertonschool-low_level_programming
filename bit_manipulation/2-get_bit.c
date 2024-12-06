#include "main.h"

/**
 * get_bit - return value of a bit at a given value
 * @n: number received
 * @index: index wanted
 * Return: value of the number at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}

