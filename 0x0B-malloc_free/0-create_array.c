#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: NULL or 0.
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	i = 0;

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
