#include "main.h"
/**
* leet - translate in leet speak
* @s: string to trasnalte
* Return: s
*/
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int leet[] = {'a', '4', 'A', '4', 'e', '3', 'E', '3',
		'o', '0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (leet[j] == s[i])
			{
				s[i] = leet[j + 1];
				j += 4;
			}
		}
	i++;
	}
return (s);
}
