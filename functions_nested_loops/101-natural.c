#include <stdio.h>
/**
* main -
* @:
* Return:
*/

int main(void)
{
	int add3 = 0;
	int add5 = 0;
	int total;
	
	while (add3 < 1024)
		add3 = add3 + 3;
	while (add5 < 1024)
		add5 = add5 + 4;
	total = add3 + add5;
	printf("%d\n", total);
return (0);
}
