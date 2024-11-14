#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* _strlen - length of a string
* @s: strings to count
* Return: num to end the program
*/
int _strlen(char *s)
{
	int num = 0;

	while (*s)
	{
		num++;
		s++;
	}
return (num);
}

/**
 * string_nconcat - concat two strings
 * @s1: frist string
 * @s2: second string
 * @n: n first char of s2
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;

	concat = malloc(len1 + len2 + 1);

	if (concat == 0)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + i] = '\0';

return (concat);
}
