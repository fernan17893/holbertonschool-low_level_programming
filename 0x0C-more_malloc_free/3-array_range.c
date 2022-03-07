#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range- creates array of integers
* @min: number to start array
* @max: number to end array
* Return: pointer to array, NULL if fail
*
*
*/

int *array_range(int min, int max)
{

	int *ptr;
	int i, val;

	if (min > max)
		return (NULL);

	val = max - min;
	ptr = malloc(sizeof(int) * (val + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= val; i++)
		ptr[i] = min++;

	return (ptr);
}
