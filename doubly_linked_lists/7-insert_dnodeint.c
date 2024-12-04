#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * insert_dnodeint_at_index - insert a node
 * at the idx place of the list
 * @h: pointer to the list
 * @n: number inserted
 * @idx: idex where to put new node
 * Return: number of nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *new;
	dlistint_t *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

return (new);
}
