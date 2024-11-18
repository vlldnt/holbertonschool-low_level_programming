#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *));

#endif
