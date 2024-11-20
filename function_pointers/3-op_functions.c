#include <stdio.h>
#include <stdlib.h>
#include "function_pointers"

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
 * op_add - substraction
 * @a: first int
 * @b: second int
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - multiplication
 * @a: first int
 * @b: second int
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - division
 * @a: first int
 * @b: second int
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_add - modulo
 * @a: first int
 * @b: second int
 * Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
