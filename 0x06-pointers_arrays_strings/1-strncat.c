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
	int i, x = 0;

	for (i = 0; dest[i] != '\0'; i++);

	for (x = 0; src[x] != '\0' && n > x; x++) /* appends 'n' of src to dest */
	{
	dest[i + x] = src[x];
	i++;
	x++;
	}	


	dest[i + x] = '\0';

	return (dest);
}
