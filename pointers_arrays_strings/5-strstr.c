#include "main.h"
/**
 * _strstr - string to string
 * @haystack: coucou
 * @needle: coucou aussi
 * Return: null if nothing same
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
