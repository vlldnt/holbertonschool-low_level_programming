#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * list_len - returns the number of elements in list_t
 * @h: List linked
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	unsigned int len;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
return (len);
}
