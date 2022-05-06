#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end- add node to end of list
* @head: head of list
* @n: node
*
* Return: address of node
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

	if (*head == NULL)
	{
		new->prev = NULL;
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
	new->prev = last;
	}
	return (new);
}
