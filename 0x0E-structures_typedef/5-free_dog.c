#include "dog.h"
#include <stdio.h>

/**
* free_dog - Function that frees dogs
* @d: pointer to struct
*
*
*/

void free_dog(dog_t *d)
{

	int i;

	for (i = 0; i < dog_t; i++)
	{
		free(d[i]);
	}
	free(d);
}
