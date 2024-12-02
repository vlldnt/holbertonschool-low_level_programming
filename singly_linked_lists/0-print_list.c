#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list - print element of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[Ø] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	len++;
	}
return (len);
}
