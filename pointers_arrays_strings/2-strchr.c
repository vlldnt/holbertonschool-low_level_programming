#include "main.h"
/**
 * _strchr - find a character
 * @s: pointer to the character
 * @c: character to point
 * Return: occurence printed form c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
return ('\0');
}
