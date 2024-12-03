#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_dlistint - free the list head
 * @head : pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *clean;

	while (head)
	{
		clean = head->next;
		free(head);
		head = clean;
	}
}
