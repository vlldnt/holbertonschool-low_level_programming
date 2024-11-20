#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition
 * @a: first int
 * @b: second int
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: first int
 * @b: second int
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first int
 * @b: second int
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first int
 * @b: second int
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: first int
 * @b: second int
 * Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
