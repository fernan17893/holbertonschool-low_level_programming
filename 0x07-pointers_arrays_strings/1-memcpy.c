#include "main.h"

/**
* *_memcpy- copies memory area
* @dest: destination of copied memory
* @src: source of memory being copied
* @n: number of bytes being copied
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *pd = dest;
	char *ps = src;

	if ((pd != 0) && (ps != 0))
	{
	while (n)
	{
	*(pd++) = *(ps++);
	--n;
	}
	}
	return (dest);
}
