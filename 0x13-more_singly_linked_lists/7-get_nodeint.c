#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* get_nodeint_at_index- returns nth node
* @head: pointer to head node
* @index: index of specific node, starting at 0
* Return: NULL
*
*
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *tmp = head;
	unsigned int count = 0;



	while (tmp != NULL)
	{
		if (count == index)
		return (tmp);
		count++;
		tmp = tmp->next;
	}
		return (NULL);
}
