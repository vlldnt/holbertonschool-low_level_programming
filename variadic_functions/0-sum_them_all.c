#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function that returns he sum of all its parameters
 * @n: number of arguments
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int res = 0;
	int add;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		add = va_arg(arg, int);
		res += add;
	}

	va_end(arg);
return (res);
}
