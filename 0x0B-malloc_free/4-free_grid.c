#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional 
 * grid previously created by your alloc_grid function.
 *
 * @height: height of the 2 dimensional array
 * Return: void.
 */

void free_grid(int **grid, int height)
{

	int i = 0;

	if (!grid || height <= 0)
		return;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);

	free(grid);
}