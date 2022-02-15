#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
* @n: input number to determine its last digit.
* Return: last digit of n.
*/

int print_last_digit(int n)
{
	
	_putchar(_abs(n) % 10 + '0');
	return (_abs(n) % 10);
}
