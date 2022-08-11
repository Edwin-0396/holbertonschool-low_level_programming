#include "search_algos.h"

/**
 * linear_search - unction that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, or -1 If value
 * is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t position = 0;

	if (!array)
		return (-1);

	while (position < size)
	{
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);

		if (array[position] == value)
			return (position);
				position++;
	}
	return (-1);
}
