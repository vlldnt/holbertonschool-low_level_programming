#include "main.h"
/**
* *_strcat - concatetnate two strings src added to dest
* @dest: destination for the strings
* @src: source the texte come from
* Return: O as always
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
return (dest);
}
