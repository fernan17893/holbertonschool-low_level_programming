#include "main.h"
#include <stdio.h>

/**
* binary_to_uint- converts binary number to unsigned int
* @b: string of unsigned int
* Return: 0
*
*
*
*/

unsigned int binary_to_uint(const char *b)
{

	unsigned int val = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
