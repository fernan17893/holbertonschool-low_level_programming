#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc- allocates memory for an array
* @nmemb: elements of the array
* @size: size of the array
* Return: pointer to allocated memory, NULL if zero or fail
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, var;

	var = nmemb * size;
	if (nmemb <= 0 || size <= 0)
	return (NULL);

	ptr = malloc(var);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (var); i++)
	{
		ptr[i] = 0;
	}
		return (ptr);
}
