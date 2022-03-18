#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* free_list- frees a list
* @head: head of list
* Return: void
*
*/

void free_list(list_t *head)
{

	list_t *last;

	while (head)
	{
	last = head;
	head = head->next;
	free(last->str);
	free(last);
	}
	free(head);
}
