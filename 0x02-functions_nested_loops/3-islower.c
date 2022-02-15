#include "main.h"

/**
* main - function that checks for lowercase character.
*
* Returns 1 if c is lowercase
*	Returns 0 otherwise
*/


int _islower(int c)
{
	char ch = 'a';
	
	while(ch <= 'z')	
	{
		if (c == ch)
			return (1);		
		ch++;
	}
	return (0);
}
