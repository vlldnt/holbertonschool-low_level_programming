#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - fucntion that allocate memory with malloc
 * @b: size of malloc
 * Return: exit 98 or alloc
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (b > 0)
	{
		if (alloc == 0)
			exit(98);
		return (alloc);
	}
exit(98);
}
