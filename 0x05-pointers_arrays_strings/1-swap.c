#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: first input parameter for the function
 * @b: second input parameter for the function
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int n1;
	int n2;

	n1 = *a;
	n2 = *b;
	*b = n1;
	*a = n2;
}
