#include "main.h"

/**
* puts2- prints every other character in a string
* @str: string
*
*
*/

void puts2(char *str)
{

	int len = 0, i = 0;

	while (str[i++])
	len++;


	for (i = 0; i < len; i += 2)

	_putchar(str[i]);

	_putchar('\n');
}
