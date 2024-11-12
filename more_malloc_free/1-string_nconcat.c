#include <stdio.h>
#include "main.h"
#include <stdlib.h>
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
	unsigned int total;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		len2 = n;
	total = len1 + len2;

	concat = malloc(total + 1);

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + len2 + 1] = '\0';
return (concat);
}
