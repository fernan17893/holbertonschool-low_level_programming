#include "main.h"

/**
* *_memset - returns memory in this case with a constant bye
* @s: memory location or string where mem will be sent
* @b: value to be copied to memory block
* @n: number of bytes used to store value
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *f = s;

	while (n > 0)
	{
	*f = b;
	f++;
	n--;
	}

	return (s);
}


