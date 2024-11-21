#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers
 * @n: number of arguments
 * @separator: separator between numbers printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(arg, int));
		else
			printf("%d%s", va_arg(arg, int), separator);
	}
	putchar('\n');

	va_end(arg);
}
