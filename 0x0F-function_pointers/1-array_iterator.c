#include <stdio.h>

/**
 * array_iterator - function that
 * executes a function given as a
 * parameter on each element of an array.
 *
 * @array: array to run
 * @size: size of the array
 * @action: to execute the function to a pointer
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
