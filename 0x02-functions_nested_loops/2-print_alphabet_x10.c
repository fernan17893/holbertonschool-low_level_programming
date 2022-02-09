#include "main.h"
/**
* print_alphabet_x10 - prints alphabet in lowercase
*  Return: is always 0
*/

void print_alphabet_x10(void)

{
	int ch = 0;
	char ap;

	while (ch++ <= 9)
	{
	for (ap = 'a'; ap <= 'z'; ap++)

	_putchar(ap);

	_putchar('\n');
	}
}
