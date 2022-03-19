#include"variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	if (!separator)
		separator = "";
	
	va_start(string, n); /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		if (!va_arg(string, char *))
		{
			printf("(nil)");
			break;
		}
		printf("%s%s ", va_arg(string, char *), separator);
	}
	printf("\n");
	va_end(string); /* Clean up. */	
}
