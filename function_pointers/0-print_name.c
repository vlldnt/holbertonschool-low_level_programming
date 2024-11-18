#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print *name
 * @name: 
 * af: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	*f = &print_name;
}
