#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* insert_nodeint_at_index- inserts node at given position
* @head: pointer to head node
* @idx: point where node should be added
* @n: data
* Return: address of new node
*
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *last = *head;
	listint_t *new;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return ('\0');
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = last;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{

		if (last == NULL || last->next == NULL)
			return (NULL);

		last = last->next;
	}

	new->next = last->next;
	last->next = new;

	return (new);
}
