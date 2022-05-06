#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint- free the list
* @head: head of the list
*
*
*
*/


void free_dlistint(dlistint_t *head)
{

	dlistint_t *last;

	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
	free(head);
}
