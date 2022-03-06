#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid- returns a pointer to a 2 dimensional array of integers
* @width: rows of the array
* @height: columns of the array
* Return: Pointer to 2 dimensional array, NULL on failure
*
*/

int **alloc_grid(int width, int height)
{

	int **ptr;
	int i, j;

	if (width == 0 || height == 0)
	return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
		while (i >= 0)
			{
			free(ptr[i]);
			i--;
			}

		free(ptr);
		return (0);
		}
	}
/* below loop is for indexing height and widht of array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
		ptr[i][j] = 0;
		}
	}

	return (ptr);
}
