#include "main.h"

/**
* _strspn- Gets lenght of a prefix substring
* @s: string
* @accept: string containing the characters tooo match.
* Return: number of characters in original s consisisting only
* of characters in accept
*/

unsigned int _strspn(char *s, char *accept)
{

	unsigned int len, i = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	for (i = 0; accept[i] != s[len]; i++)
	{
	if (accept[i] == '\0')

	return (len);
	}
	}
	return (len);
}


