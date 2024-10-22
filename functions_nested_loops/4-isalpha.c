#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check alpha case
 * @c: chez pas ou c'est
 * Return: 1 if alpha 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 97  && c <= 122) || (c >= 65 && c <= 90))
		return (1);
return (0);
}
