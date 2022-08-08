#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t position = 0;

	if (!array)
		return (-1);

	while (position < size)
	{
		if (array[position] == value)
			return (position);
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		position++;	
	}
	return (-1);
}
