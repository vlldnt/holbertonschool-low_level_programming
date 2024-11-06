#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a character
 * @s: pointer to the character
 * @c: character to point
 * Return: occurence printed form c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char a;

	a = c;

	if (s == NULL)
		return (NULL);

	while (s[i] != a && s[i] != ('\0'))
		i++;

	if (s[i] == c)
		return (s + i);

return (NULL);
}
