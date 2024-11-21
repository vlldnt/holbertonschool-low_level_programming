#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings
 * @n: number of arguments
 * @separator: separator between strings printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *text;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		text = va_arg(string, char*);

		if (text == NULL)
			printf("(nil");
		else
			printf("%s", text);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	putchar('\n');

	va_end(string);
}
