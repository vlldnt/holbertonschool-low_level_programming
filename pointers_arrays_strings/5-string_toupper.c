#include "main.h"
/**
* string_toupper - change lower to upper case
* @s: strings
* Return: 0
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
return (s);
}