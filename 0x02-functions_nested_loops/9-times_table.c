#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
*
*/

void times_table(void)
{
	int n = 0;
	int times_table;

	while (n < 10)
	{
		int m=0;

		while (m < 10)
		{
			times_table = n * m;
			if (m > 0 && m < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (times_table >= 10)
			{
				_putchar((times_table / 10) + '0');
				_putchar((times_table % 10) + '0');
			} else
			{
				_putchar(' ');
				_putchar(times_table + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
