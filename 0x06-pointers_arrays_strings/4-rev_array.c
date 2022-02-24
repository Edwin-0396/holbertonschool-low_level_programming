#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 */

void reverse_array(int *a, int n)
{
	int swap, i = 0;

	n--;
	while (i < n)
	{
		swap = a[i];
		a[i] = a[n];
		a[n] = swap;
		i++;
		n--;
	}

}
