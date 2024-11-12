#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - change pointer
 * @str :copy this string
 * Return: Always 1 or NULL if == 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *temp = str;
	char *dest;

	while (*temp)
	{
		temp++;
		len++;
	}
	dest = malloc(sizeof(char) * len);
	for (; i < len; i++)
		dest[i] = str[i];
	if (len == 0 || str == 0 || dest == NULL)
		return ('\0');
return (dest);
}
