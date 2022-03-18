#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n); /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int); /* Get the next argument value. */

	va_end(ap); /* Clean up. */
	return (sum);
}
