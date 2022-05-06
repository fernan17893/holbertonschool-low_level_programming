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
*
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{


	dlistint_t *new;

	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	(*head) = new;


	return (new);
}
