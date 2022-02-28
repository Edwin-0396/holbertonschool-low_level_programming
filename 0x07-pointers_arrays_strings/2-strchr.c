#include "main.h"

/**
 * _strchr - check the code
 * @s: input string
 * @c: occurrence of the character
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	if (!s)
		return ("error \n");

	while (*s)
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	return (s);
}
