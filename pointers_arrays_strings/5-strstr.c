#include "main.h"
/**
 * _strstr - string to string
 * @haystack: coucou
 * @needle: coucou aussi
 * Return: null if nothing same
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		for (; *needle != '\0'; needle++)
		{
			if (*haystack == *needle)
				return (haystack);
			else
				break;
		}
	}
return ('\0');
}
