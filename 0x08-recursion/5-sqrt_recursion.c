#include "main.h"

/**
 * root_square - function to get the root square
 * @x: input parameter
 * @y: input parameter
 * Return: Always 0.
 */

int root_square(int x, int y)
{

	if (y * y == x)
		return (y);

	if (y * y > x)
		return (-1);

	return (root_square(x, y + 1));
}

/**
 * _sqrt_recursion - function that prints a string, followed by a new line.
 * @n: input parameter
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root_square(n, 0));
}
