#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - add new nodes at the begining
 * @head: first node
 * @str: string added
 * Return: copy of the adress
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	new->str = strdup(str);
	new->len = size;
	new->next = *head;
	*head = new;

return (new);
}
