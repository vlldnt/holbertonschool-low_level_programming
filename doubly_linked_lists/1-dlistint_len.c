#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * dlistint_len - returns the number of elements in *h
 * @h: List linked
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
return (n);
}
