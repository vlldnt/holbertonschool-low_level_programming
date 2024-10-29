#include "main.h"
/**
* _strcpy - get stringds and copy then and return them
* @dest: destination
* @src: source
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src)
	{
		len++;
		src++;
	}

	src = src - len;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
return (dest);
}
