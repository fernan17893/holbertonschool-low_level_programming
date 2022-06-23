#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenate two strings
* @s1: string 1
* @s2: string 2
* @n: number of bytes
* Return: Concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int size1 = 0, size2 = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";


	while (s1[size1])
		size1++;
		
	while (s2[size2])
		size2++	;

	if (n >= size2)
		n = size2;


	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[i] = s2[i];
	
	ptr[i] = '\0';

	return (ptr);

}
