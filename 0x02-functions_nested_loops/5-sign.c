#include "main.h"

/**
* print_sign - function that prints the sign of a number.
*	@n: input number to calculate its sign.
* return 0 if n is zero - 1 otherwise.
*/

int print_sign(int n)
{
	if (n * (-1) < 0)
	{
		_putchar('+');
		return (1);
	} else if (n * (-1) == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (1);
}
