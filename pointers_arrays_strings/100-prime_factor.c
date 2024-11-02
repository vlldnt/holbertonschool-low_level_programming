#include <stdio.h>
/**
 * main - calculate the biggest primer factor of the number 612852475143
 */
void main(void)
{
	long int number = 612852475143;
	long int prem = 2;

	while (prem * prem <= number)
		if (number % prem == 0)
			number /= prem;
		else
			prem++;

	printf("%ld\n", number);

}
