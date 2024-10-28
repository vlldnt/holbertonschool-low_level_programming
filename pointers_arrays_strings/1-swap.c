#include "main.h"
/**
* swap_int - swap two numbers
* @a: first one
* @b: second one to swap
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
