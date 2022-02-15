#include <main.h>

/**
* main - function that prints the 9 times table, starting with 0.
*
* Return: Always 0.
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
			
			times_table=n*m;
			_putchar((times_table/10)+'0');:
			_putchar((times_table%10)+'0');
			_putchar(',');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
