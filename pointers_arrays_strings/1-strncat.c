#include "main.h"
/**
* _strncat - concatenated two strings n first bytes
* @dest: Destination
* @src: sources
* @n : number of bytes concatenated
* Return: Dest for the diestination
*/
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
return (dest);
}
