#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_dnodeint - add new nodes at the begining
 * @head: Pointer to the head of the list
 * @n: number to insert in first
 * Return: copy of the adress
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (head != NULL)
		(*head)->prev = new;

	*head = new;

return (new);
}
