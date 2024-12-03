#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - free the list
 * @head: list to be freed
 */

void free_list(list_t *head)
{
	list_t *clean;

	while (head != NULL)
	{
		clean = head->next;
		free(head->str);
		free(head);
		head = clean;
	}
}
