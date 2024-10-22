#include "main.h"
#include <stdio.h>

/**
 * _islower - check lower case characters
 * @c: salut je sais pas ce que c'est
 * Return: 1 check is lower or capital
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
