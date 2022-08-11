#include "search_algos.h"

/**
 * print_array - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @left: left side of the array
 * @right: right side of the array
 *
 */

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
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm  *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or -1 f value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = ((left + right) / 2);
		if (array[middle] < value)
			left = middle + 1;
		if (array[middle] > value)
			right = middle - 1;
		if (array[middle] == value)
			return (middle);
	}
	return (-1);
}
