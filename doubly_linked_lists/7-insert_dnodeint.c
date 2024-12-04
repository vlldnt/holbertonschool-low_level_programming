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

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = temp->next;
	new->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;
return (NULL);
}
