#include "hash_tables.h"

/**
* hash_table_set- adds element to hash tale
* @ht: hash table we are adding element to
* @key: key
* @value: value associated with key.
*
* Return: 1 if succeeds, 0 otherwise
*/



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node = NULL;
	unsigned long int index;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

}
