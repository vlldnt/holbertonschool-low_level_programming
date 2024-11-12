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
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		len2 = n;

	concat = malloc(sizeof(char) * (len1 + len2) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
		for (j = 0; j < n; j++)
			concat[len1 + j] = s2[j];
	}

	concat[len1 + len2 + 1] = '\0';
return (concat);
}
