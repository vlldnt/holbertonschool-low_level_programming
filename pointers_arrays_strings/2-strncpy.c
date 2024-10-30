#include "main.h"
/**
* _strncpy - copies a string
* @dest: Destination
* @src: source
* @n: n times
* Return: destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (*src)
	{
		src++;
		len++;
	}

	src = src - len;

	while (i < n)
	{
		dest[i] = src[i];
		if (i > len)
			dest[i] = 0;
	i++;
	}
return (dest);
}
