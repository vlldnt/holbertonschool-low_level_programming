#include "main.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - convert binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars.
 * Return: convert number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			num = num * 2 + (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
return (num);
}
