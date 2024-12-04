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
	dlistint_t *temp;
	dlistint_t *node;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	{
		if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
			return (1);
		}
		i++;
		temp = (*head)->next;
		node = *head;

		while (temp)
		{
			if (index == i)
			{
				node->next = temp->next;
				free(temp);
				return (1);
			}
		node = temp;
		temp = temp->next;
		i++;
		}
	}
return (-1);
}
