#include <stdio.h>
/**
* main -
* @:
* Return:
*/

int main(void)
{
	int n = 0;
	int total = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		       total += n;
		
	n++;
	}		

	printf("%d\n", total);
return (0);
}
