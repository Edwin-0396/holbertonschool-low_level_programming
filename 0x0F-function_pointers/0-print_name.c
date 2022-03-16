#include <stdio.h>

/**
 * print_name - Function that prints a name.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
   f(name);
}
