#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint-deletes head node
* @head: pointer to head node
* Return: 0
*
*
*/


int pop_listint(listint_t **head)
{

	int data;
	listint_t  *tmp = *head;

	if (tmp == NULL)
	{
		return (0);
	}
	data = tmp->n;
	*head = tmp->next;
	if (tmp != NULL)
	{
		free(tmp);
		return (data);
	}
	return (data);
}
