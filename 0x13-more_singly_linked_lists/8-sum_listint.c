#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* sum_listint- returns sum of all data in a linked list
* @head: nodes
* Return: sum of all data, 0 if empty
*
*
*
*/


int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
	{
	return (0);
	}

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
