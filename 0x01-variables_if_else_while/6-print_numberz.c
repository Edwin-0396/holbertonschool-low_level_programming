#include <stdio.h>


/**
* main - program that prints all single digit numbers of base 10
* starting from 0, followed by a new line.
*
* Return: always 0
*/

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
	putchar(n);
	}
	putchar("\n");
	return (0);
}