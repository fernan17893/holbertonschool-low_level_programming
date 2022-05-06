#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*
*
*
*
*
*
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new, *last;

	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->n = n;
	new->next = NULL;
	last= *head;

	if (*head == NULL) 
	{
		new->prev = NULL;
		*head = new;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev= last;

	return (new);
}
