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

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}

	while (i <= size)
	{
	s[i] = c;
	i++;
	}
	s[i] = '\0';

	return (s);
}
