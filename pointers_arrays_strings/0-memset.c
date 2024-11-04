#include "main.h"
/**
 * _memset - fill the first bytes of the memory
 * @s: area
 * @n: number of bytes
 * @b: constant
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
return (s);
}
