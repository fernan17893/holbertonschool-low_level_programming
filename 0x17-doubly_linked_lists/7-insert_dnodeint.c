#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int count;
	dlistint_t *tmp = *h;
	dlistint_t *new_node;
	unsigned int i;

	for (count = 0; tmp != NULL; count++)
	{
	tmp = tmp->next;
	}

	if (idx > count)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx > 0 && idx < count)
	{
		tmp = *h;
		for (i = 1; i < idx; i++)
		{
			tmp = tmp->next;
		}
		new_node->next = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
		new_node->next->prev = new_node;
	}
				
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (idx == count - 1)
	{
		return (add_dnodeint_end(h, n));
	}

	return (new_node);
}
