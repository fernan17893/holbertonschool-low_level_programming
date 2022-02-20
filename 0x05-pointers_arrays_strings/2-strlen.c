#include "main.h"

/**
*_strlen - Returns the lenght of a string
*@s: String being counted
*Return: string lenght
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
	len++;
	}

	return (len);
}
