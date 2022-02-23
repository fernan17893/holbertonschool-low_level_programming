#include "main.h"

/**
 * _strlen_recursion- returns the lenght of a string
 * @s: string
 * Return: 0
 *
 */

int _strlen_recursion(char *s)
{

	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(&s[i] + 1));

	}
}
