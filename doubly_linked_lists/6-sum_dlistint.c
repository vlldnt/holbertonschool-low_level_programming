#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * sum_dlistint - sum all the int of the nodes
 * @head: list of node
 * Return: 0 if empty or the sum of all
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
