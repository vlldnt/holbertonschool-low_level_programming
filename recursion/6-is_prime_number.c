#include "main.h"
/**
 * prime - find the prime
 * @i: coucou
 * @n: petit hibou
 * Return: the value
 */
int prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - print if number is prime number
 * @n: number
 * Return: value returned
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
