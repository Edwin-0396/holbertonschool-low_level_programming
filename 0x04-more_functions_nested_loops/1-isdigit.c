<<<<<<< HEAD
#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: the int for the paramaters of my function
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	return (0);
}
=======
#include "main.h"
#include <stdio.h>

/**
* _isdigit - function that checks for a digit (0 through 9)
*
* @c: variable to evaluate if is uppercase
*
* Return: 1 if c is a digit  or 0 is otherwise
*
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
>>>>>>> 6a705421aaa845b99eb08d93d7b39a53e8752eb8
