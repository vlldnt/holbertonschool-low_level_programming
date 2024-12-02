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
	list_t *freed;
	list_t temp;

	temp = head;

	while (temp)
	{
		freed = temp->next;
		free(temp->str);
		free(temp);

		temp = freed;
	}
}
