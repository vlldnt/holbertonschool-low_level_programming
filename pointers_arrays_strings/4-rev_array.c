#include "main.h"
/**
* reverse_array - to reverse arrays
* @a: array
* @n: input
* Return:
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < n)
	{
		n--;
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
	}
}
