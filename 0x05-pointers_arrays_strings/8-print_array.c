#include "main.h"
#include <stdio.h>

/**
* print_array- prints array of characters
* @n: characters in the array
* @a: array of characters
* Return: void
*
*/

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n -1)
		printf(", ");
	}
		putchar('\n');
}
