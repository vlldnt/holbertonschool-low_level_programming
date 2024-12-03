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
	dlistint_t *new, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (*h);
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
		}
	i++;
	temp = temp->next;
	}

	if (idx > i)
		return (NULL);
	return (new);

}
