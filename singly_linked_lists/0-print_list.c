#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list - print element of a list
 * @h: List linked
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[Ø] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	len++;
	}
return (len);
}
