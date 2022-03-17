#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: char to print
 * @f: pointer to function
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
