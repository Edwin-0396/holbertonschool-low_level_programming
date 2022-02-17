<<<<<<< HEAD
#include <main.h>

/**
* _isupper - function that checks for uppercase character.
*
* Return: 1 if c is uppercase or 0 0 otherwise.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
=======
#include "main.h"
/**
 * _isupper - check if is uppercase
 * @c: variable to evaluate if is uppercase
 * Return: 1 if is uppercase or 0 if is otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
>>>>>>> 6a705421aaa845b99eb08d93d7b39a53e8752eb8
}
