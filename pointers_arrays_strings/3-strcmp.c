#include "main.h"
/**
* _strcmp - compare two string
* @s1: compare n°1
* @s2: compare n°2
* Return: i dunno
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 == '\0' || *s2 =='\0'))
	{
		s1++;
		s2++;
	}
return (*s1 - *s2);
}
