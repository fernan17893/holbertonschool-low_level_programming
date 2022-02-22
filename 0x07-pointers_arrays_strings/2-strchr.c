#include "main.h"

/**
* *_strchr- Locates a character in a string
* @s: string
* @c: character
* Return: first occurence of character
*
*/

char *_strchr(char *s, char c)
{

	char *i = 0;

	if (s != 0)
{
	do

	{
	if (*s == c)
	{
		i = s;
		break;
	}
	}

	while (*s++);

	}
	return (i);
}
