#include "main.h"

/**
* print_square- Prints squares
* @size: number of squares
* Return: 0
*/

void print_square(int size)
{
	int len, wit;

	if (size <= 0)
	{
	_putchar('\n');
}
	else
	{
	for (len = 0; len < size; len++)
	{
	for (wit = 0; wit < size; wit++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	}
