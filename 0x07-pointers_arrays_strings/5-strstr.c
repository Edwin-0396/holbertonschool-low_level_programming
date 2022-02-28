#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: input parameter
 * @needle: input parameter
 * Return: haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i))
	{
		if (*(needle) == *(haystack + i))
		{
			while (*(needle + j) == *(haystack + i))
			{
				return (haystack + i);
				j++;
			}
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
