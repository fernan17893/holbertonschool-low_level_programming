#include "main.h"

/**
* _strlen - Returns the lenght of a string
* @s: String being counted
* 
*/

int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0' ; s++)
	{

	x++;
	}

	return (x);
}
