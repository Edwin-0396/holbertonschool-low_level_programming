#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: size of each element
 * @max: number of members
 * Return: void.
 */

int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (0);

	s = malloc(sizeof(int) * (max - min) + 1);
	if (!s)
		return (0);

	for (i = min; i <= max; i++)
		s[i] = i;

	return (s);
}
