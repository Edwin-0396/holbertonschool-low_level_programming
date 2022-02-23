#include "main.h"

 /**
  * _strncat - function that concatenates two strings.
  * it will use at most n bytes.
  *
  * @dest: input parameter
  * @n: input parameter
  * @src: input parameter
  * Return: pointer to the resulting string dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int j = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && j < n)
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	*(dest + n + 1) = '\0';
	return (s);
}
