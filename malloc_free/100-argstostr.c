#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates
 * @ac: ac
 * @av: av
 * Return: NULL or new string *dest
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char *dest;
	int len = 0;
	int n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == 0)
	{
		free(dest);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			dest[n] = av[i][j];
			j++;
			n++;
		}
		dest[n] = '\n';
		n++;
	}
	dest[n] = '\0';
return (dest);
}
