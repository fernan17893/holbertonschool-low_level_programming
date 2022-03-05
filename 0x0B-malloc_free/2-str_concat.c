#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strlen - Returns the lenght of a string
*@s: String being counted
*Return: string lenght
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}

	return (len);
}

/**
* *str_concat- concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: NULL if NULL, concatenated string otherwise
*/

char *str_concat(char *s1, char *s2)
{

	char *ptr;
	int size1, size2, i, j;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(sizeof(char) * size1 + size2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
	ptr[i] = s1[i];
	}

	for (j = 0; j <= size2; j++)
	{
	ptr[i] = s2[j];
	i++;
	}
	return (ptr);
}
