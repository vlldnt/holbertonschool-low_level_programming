#include "main.h"
/**
 * _strspn - return the number of byte
 * @s: compare strings
 * @accept: compare string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (1);
		accept++;
		}
	s++;
	}
return ('\0');
}
