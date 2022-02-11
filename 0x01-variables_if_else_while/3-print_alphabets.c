#include <stdio.h>


/**
* main -  program that prints the alphabet in 
* lowercase, and then in uppercase, followed by a new line.
*
* Return: always 0
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
                putchar(ch);
        }
	printf("\n");
	return (0);
}
