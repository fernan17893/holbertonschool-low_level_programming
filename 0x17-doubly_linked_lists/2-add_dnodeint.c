#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint- adds node to begging of linked lists
* @head: head of linked lists
* @n: node
*
* Return: address of new node
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
