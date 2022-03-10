#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index- searches for an integer
 * @array: array
 * @size: number of elements
 * @cmp: pointer to function
 * Return: -1 if no match pointer if integer
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		cmp(array[i]);
		i++;
		if (cmp(array[i]) != 0)
			return (i);
	}


return (-1);

}
