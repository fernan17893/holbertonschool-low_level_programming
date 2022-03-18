#include "main.h"

/**
 * leet - converts a string into l33t.
 * @a: string
 * Return: converted string
 */

char *leet(char *a)
{
	int i = 0, b = 0, n[5] = {4, 3, 0, 7, 1};
	char letters[10] = "AaEeOoTtLl";

	for (; a[i]; i++)
	{
		for (b = 0; (a[i] != letters[b] && b < 10); b++)
			;
		if (a[i] == letters[b])
		{
			b /= 2;
			a[i] = (n[b] + '0');
		}
	}
	return (a);
}
