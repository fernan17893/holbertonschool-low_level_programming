#include "main.h"

/**
*_strcat- concatenates strings together
*@dest: string 1
*@src: string 2
*Return: resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	len++;
	}
	for (i = 0; src[i] != '\0'; i++)
{
	dest[len + i] = src[i];
}
{
	dest[len + i] = '\0';
}
	return (dest);
}
