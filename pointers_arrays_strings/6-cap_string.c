#include "main.h"
/**
* cap_string - coucou
* @s: coucou
* Return: s
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		if (
		s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == '(' || s[i] == ')' || s[i] == '.' ||
		s[i] == '{' || s[i] == '}' || s[i] == ';' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == ',')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}
return (s);
}
