#include "main.h"
/**
 * factorial - fatorial of a given number
 * @n: given number
 * Return:  if lower than zero -1 to indicate an error
 */
int factorial(int n)
{
	int product = n;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	product = product * factorial(n - 1);

return (product);

}
