#include <stdio.h>


/**
* main - program that prints the alphabet in
* lowercase, and then in uppercase, followed by a new line.
*
* Return: always 0
*/

int main(void)
{
	char ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{	
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
  return (0);
}
