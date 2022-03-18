#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog- Function that creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = _strdup(name);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->age = age;
	p->owner = _strdup(owner);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}

/**
 * _strdup- returns pointer to a new space in memory, duplicate of the string.
 * @str: String
 *
 * Return: The pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		ptr[len] = str[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);

}
