#include "main.h"
/**
 * _strspn - return the number of byte
 * @s: compare strings
 * @accept: compare string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
return (i);
}
