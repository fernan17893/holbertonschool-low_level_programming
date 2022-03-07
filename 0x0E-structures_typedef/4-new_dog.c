#include "dog.h"
#include <stdio.h>

/*
* new_dog- 
*
*
*
*
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog_t *doggy;

	doggy = malloc(sizeof(struct dog_t));
	if (user == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	owner->owner = owner;
	return (doggy);
}
