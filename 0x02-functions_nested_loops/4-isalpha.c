#include "main.h"

/**
* main - function that checks for alphabetic character.
*
* Return: Always 0.
*/

int _isalpha(int c)
{
	char ch='A';
	while (ch <= 'z')
	{
		if (c==ch)
			return (1);
	}
	return (0);
}


