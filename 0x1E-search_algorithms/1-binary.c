#include "search_algos.h"

void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		if (left < right)
			printf("%d, ", array[left]);
		if (left == right)
			printf("%d\n", array[left]);
		left++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0;

	if (!array)
		return (-1);

	while(left <= right)
	{
		print_array(array, left, right);
		middle = ((left + right)/2);
		if (array[middle] < value)
			left = middle + 1;
		if (array[middle] > value)
			right = middle - 1;
		if (array[middle] == value)
			return (middle);
	}
	return (-1);
}