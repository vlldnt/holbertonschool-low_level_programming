#include "main.h"
/**
 * _strpbrk - locate first occurence in the string
 * @s: strings
 * @accept: accepted strings
 * Return: S
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	s++;
	}
return (0);
}

