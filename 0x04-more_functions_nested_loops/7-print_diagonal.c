#include "main.h"

/**
* print_diagonal- prints diagonal line
* @n: number of lines
*
*/

void print_diagonal(int n)
{

int l, s;

	if (n > 0)
	{
	for (l = 0; l < n; l++)
	{
	for (s = 0; s < l; s++)
	_putchar(' ');
	_putchar('\\');

	if (l == n - 1)
	continue;

	_putchar('\n');
}
}
	_putchar('\n');
}
