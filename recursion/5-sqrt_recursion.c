#include "main.h"
/**
 * square - mdm
 * @i: i the number
 * @n: n from the sqrt
 * Return: Cooucou
 */
int square(int n, int i)
{
	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);
return (square(n, i + 1));
}



/**
 * _sqrt_recursion - square number of a num
 * @n: number in question
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	n = square(n, 1);
return (n);
}

