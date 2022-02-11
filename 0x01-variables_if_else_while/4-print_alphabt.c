#include <stdio.h>

/**
* main - program that prints the alphabet in lowercase except q and e,
* followed by a new line
*
* Return: always 0
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{	
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	}
	printf("\n");
	return (0);
}
