#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of ints using linear search
 * @array: array of ints
 * @size: number of elements
 * @value: value to search
 *
 * Return: Value
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i;

	for (i = 0; i < size && array != NULL; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
		return (-1);
}
