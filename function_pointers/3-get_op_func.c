#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_function
 * @s: opertor passed as argument
 * Return:  Operator function
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    	int i;

	for (i = 0; i < 6; i++)
	{
		if (ops[i]
	}
}

