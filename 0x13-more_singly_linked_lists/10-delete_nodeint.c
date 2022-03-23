#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* delete_nodeint_at_index- delete node at given position
* @head: node
* @index: position
* Return: 1 if success -1 if failure
*
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *ptr = *head;
	listint_t *last = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
	}

	else
	{
		while (index != 0)
		{
			last = ptr;
			ptr = ptr->next;
			index--;
		}
		last->next = ptr->next;
		free(ptr);
		ptr = NULL;
	}
		return (1);
}
