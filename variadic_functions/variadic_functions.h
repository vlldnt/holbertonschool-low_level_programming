#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pr_float(va_list list);
void pr_int(va_list list);
void pr_string(va_list list);
void pr_char(va_list list);

/**
 * struct type - structure to chekc
 * @letter: letter
 * @function: function
 */

typedef struct type
{
	char *letter;
	void (*function)(va_list print);
} type;

#endif
