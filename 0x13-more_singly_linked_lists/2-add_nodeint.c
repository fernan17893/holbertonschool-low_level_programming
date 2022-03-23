#include "lists.h"

/**
 * add_nodeint - Function that adds a node at the beginning of a list.
 * @n: pointer to the address of head.
 * @head: head of new node.
 * Return: The number of elements in the linked list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);

}
