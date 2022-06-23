#include "main.h"

/**
* _strncat- concatenates two strings
* @dest: destination string
* @src: source string
* @n: number of bytes
* Return: resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[i])
	{
	i++;
	}

	while (x < n && src[x])
	{
	dest[i] = src[x];
	i++;
	x++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
