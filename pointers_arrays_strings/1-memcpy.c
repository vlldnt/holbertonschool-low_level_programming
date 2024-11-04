#include "main.h"
/**
 * _memcpy - copy to an area
 * @dest: array where to copy
 * @src: from source
 * @n: number of byte to copy
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
