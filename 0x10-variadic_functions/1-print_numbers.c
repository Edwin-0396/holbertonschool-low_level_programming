#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n); /* Initialize the argument list. */

	for (i = 0; i < n; i++)
		printf("%d%s ", va_arg(numbers, int), separator);

	printf("\n");
	va_end(numbers); /* Clean up. */
}
