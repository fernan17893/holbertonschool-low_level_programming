#include "search_algos.h"

/**
 * binary_search- searches value using binary search algorithm
 * @array: pointer to the first element to search
 * @size: number of elements in array
 * @value: value being searched
 *
 * Return: value or -1
 */

int binary_search(int *array, size_t size, int value)
{

	int i;
	int start = 0;
	int end = size - 1;
	int middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}


		middle = start + (end - start) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}
