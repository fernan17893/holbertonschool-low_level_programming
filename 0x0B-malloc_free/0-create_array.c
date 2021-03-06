#include "main.h"
#include <stdlib.h>

/**
* *create_array- creates an array of chars, initialized with specific char
* @size: size of array
* @c: specific char to initialize array
* Return: NULL if size is 0, array other wise
*
*/

char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int i = 0;

	if (size > 0)
	{
	s = malloc((size) * sizeof(char));
	if (s == NULL)
		return (NULL);
	}
	else
		return (NULL);

	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}

	return (s);
}
