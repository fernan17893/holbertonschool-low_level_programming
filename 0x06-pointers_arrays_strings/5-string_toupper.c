#include "main.h"

/**
 * string_toupper- changes all lowercase characters to uppercase
 * @p: lowercase character
 * Return: uppercase character
 *
 *
 */

char *string_toupper(char *p)
{

	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			(p[i] = p[i] - 32);
	}



	return (p);
}
