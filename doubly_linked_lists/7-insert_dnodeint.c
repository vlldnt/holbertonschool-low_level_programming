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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (*h == NULL || new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
return (NULL);
}
