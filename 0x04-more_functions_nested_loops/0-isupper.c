#include "main.h"
/**
 * _isupper - check if is uppercase
 * @c: variable to evaluate if is uppercase
 * Return: 1 if is uppercase or 0 if is otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
