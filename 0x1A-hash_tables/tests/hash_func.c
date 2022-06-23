#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CAPACITY 50000 //Size of Hash Table

unsigned long hash_function(char* str)
{
	unsigned long i = 0;
	int j = 0;

	for (j = 0; str[j]; j++)
		i += str[j];
	return i % CAPACITY;
}



