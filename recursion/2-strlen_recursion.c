#include "main.h"
/**
 * _strlen_recursion - lenght
 * @s: string to count
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
return (0);
}
