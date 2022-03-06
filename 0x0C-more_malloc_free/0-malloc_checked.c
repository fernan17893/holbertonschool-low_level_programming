#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked- allocates memory
* @b: memory to be allocated
* Return: pointer to allocated memory; 98 if fail
*/


void *malloc_checked(unsigned int b)
{

	void *i = malloc(b);

	if (i == NULL)
	{
	exit(98);
	}

	return (i);
}
