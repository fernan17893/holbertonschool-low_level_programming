#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a new space in mem
* @str: string given to duplicate
* Return: NULL if string null, pointer if string duplicated
*
*
*/

char *_strdup(char *str)
{

	char *s;
	int i, j = 0;

	if (str == NULL)
	return (NULL);


	for (j = 0; str[j] != '\0'; j++)

	s = malloc(sizeof(char) * j + 1);
	if (s == NULL)
	return (NULL);

	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}
	return (s);

}
