#include <stdio.h>


/**
* main - program that prints the alphabet in
* lowercase, and then in uppercase, followed by a new line.
*
* Return: always 0
*/

int main(void)
{
	int ch;

	for (ch = 48 ; ch < 58 ; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
