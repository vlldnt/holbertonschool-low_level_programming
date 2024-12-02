#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - add new nodes at the begining
 * @head: first node
 * @str: string added
 * Return: copy of the adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *end = *head;
	char *copy = strdup(str);
	int size = 0;

	if (str == NULL || new == NULL)
		return (NULL);

	while (str[size])
		size++;

	new->str = copy;
	new->len = size;
	new->next = NULL;

	if (*head)
	{
		while (end->next != NULL)
			end = end->next;
	end->next = new;
	}
	else
		*head = new;

return (new);
}
