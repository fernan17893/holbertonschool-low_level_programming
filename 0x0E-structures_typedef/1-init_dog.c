#include "dog.h"
#include <stdio.h>

/**
* init_dog-initializes variables
* @d: pointer to struct
* @name: name of dog
* @age: age of do
* @owner: owner of dog
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
