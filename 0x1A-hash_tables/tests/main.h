#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>






unsigned long hash_function(char* str);
Ht_item* create_item(char *key, char* value)




typedef struct Ht_item Ht_item;

// Define the Hash Table Item here
struct Ht_item {
	char* key;
	char* value;
};

typedef struct HashTable HashTable;

// Define the Hash Table here
struct HashTable {
	// Contains an array of pointers
	// to items
	Ht_item** items;
	int size;
	int count;
};






#endif
