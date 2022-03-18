#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node- adds node to the beggining of list
* @head: head of linked lists
* @str: string
*
* Return: new node
*/


list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	int length = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
