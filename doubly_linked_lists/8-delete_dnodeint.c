#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * delete_dnodeint_at_index - delete index number  node of the list
 * @head: the list
 * @index: index you want to delete
 * Return: 1 if suceed or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;

		if (*head == NULL)
			return (-1);

		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);

	node = temp->next;
	temp->next = node->next;

	if (node->next != NULL)
		node->next->prev = temp;
	free(node);
return (1);
}
