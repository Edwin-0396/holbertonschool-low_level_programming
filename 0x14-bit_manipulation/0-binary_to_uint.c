#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: pointer string
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	int num = 1;
	int exp = 0;
	int num_dec = 0;

	if (!b)
		return (0);

	while (b[count])
		count++;

	count--;
	while (count >= 0)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		if (b[count] == '1')
		{
			num_dec = num_dec + (num << exp);
		}
		exp++;
		count--;
	}
	return (num_dec);
}
