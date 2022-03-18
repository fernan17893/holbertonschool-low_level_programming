#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end- adds node to the end of list
* @head: head of linked lists
* @str: string
*
* Return: new node
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new;
	int length = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	}
	return (new);
}
