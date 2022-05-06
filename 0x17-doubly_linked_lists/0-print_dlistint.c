#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - prints elements
* @h: head of list
*
* Return: nodes
*
*/


size_t print_dlistint(const dlistint_t *h)
{

	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
		}
	return (count);
}
