#include "main.h"
#include <stdio.h>

/**
* reverse_array- reverses content of array of characters
* @a: array of characters
* @n: number of elements in the array
* Return: none
*/

void reverse_array(int *a, int n)
{
	int  *p, i, v, j;

	p = a;

	for (i = 1; i < n; i++)
	{
	p++;
	}

	for (j = 0; j < i/2; j++)
	{
	v = a[j];
	a[j] = *p;
	*p = v;
	p--;
	}
}
