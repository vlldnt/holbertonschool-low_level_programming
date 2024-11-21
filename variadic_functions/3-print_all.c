#include <stdio.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * pr_char - print char
 * @format: list
 */
void pr_char(va_list list)
{
	printf("%c", va_arg(list, int));
}


/**
 * pr_int - print int
 * @format: list of formats
 */
void pr_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * pr_string - print string
 * @format: list format
 */
void pr_string(va_list list)
{
	printf("%s", va_arg(list, char*));
}

/**
 * pr_float - print float
 * @format: list
 */
void pr_float(va_list list)
{

}

/**     
 * print_all - print anything
 * @format: list 
 */
void print_all(const char * const format, ...)
{
	type[] = {
		{'c', pr_char},
		{'i', pr_int},
		{'f', pr_float},
		{'s', pr_string}
	};
	int i;
	va_list print;

	va_start(print, format);



	va_end(print);
}
