#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width of the 2 diemnsional array
 * @height: height of the 2 dimensional array
 * Return: void.
 */

int **alloc_grid(int width, int height)
{

	int i = 0, j = 0, **array_two;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_two = malloc(sizeof(int *) * height);

	if (!array_two)
		return (NULL);

	while (i < height)
	{
		array_two[i] = malloc(sizeof(int) * width);

		if (array_two[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(array_two[i]);

			free(array_two);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			array_two[i][j] = 0;

		i++;
	}

	return (array_two);
}
