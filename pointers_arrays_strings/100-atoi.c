#include "main.h"
/**
* _atoi - les opticiens
* @s: strings
* Return:  again 0
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s <= '9' && *s >= '0')
			break;
	}

	while (*s <= '9' && *s >= '0')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}

	if (sign == 1)
		return (-sum);
return (sum);
}
