#include "main.h"
#include <stdio.h>
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
