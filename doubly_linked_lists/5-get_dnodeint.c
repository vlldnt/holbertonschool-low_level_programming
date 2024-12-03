#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * get_dnodeint_at_index - insert a int at index
 * @head: pointer to the head list
 * @index: index wanted to insert an int
 * Return: 0 or Head if i = index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
	i++;
	}
return (0);
}
