#include "main.h"


HashTable* create_table(int size)
{
	HashTable* table = (HashTable*) malloc(sizeof(HashTable));
	table->size = size;
	table->count = 0;
	table->items = (Ht_item**) calloc(table-size, sizeof(Ht_item*));

	for (int i=0, i<table->size; i++)
		table->items[i] = NULL;

	return table;
}
