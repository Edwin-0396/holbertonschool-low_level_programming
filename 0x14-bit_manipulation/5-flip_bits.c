#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip to
 * get from one number to another.
 *
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipbit = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			flipbit++;
		xor >>= 1;
	}
	return (flipbit);
}
