#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint- sum all data on the list
* @head: head node
* Return: return sum of list
*
*
*/

int sum_dlistint(dlistint_t *head)
{

	int data = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}
