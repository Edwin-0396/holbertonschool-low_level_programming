#include "main.h"

/**
* main -  function that prints 10 times the alphabet, in lowercase, followed by *	a new line.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int t=0;
	char ch;
	while(t<10)
	{	
		for (ch ='a'; ch <= 'z'; ch++)
			_putchar(ch);
		t++;
	}
}
