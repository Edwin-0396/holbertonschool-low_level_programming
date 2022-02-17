#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: random integrer
 * Return: 1 if c is a digit o if is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}