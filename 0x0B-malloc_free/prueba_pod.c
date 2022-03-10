#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i]; 

	for (j = 0; s2[j] != '\0'; j++)
		s[j] = s2[j];

	s[i] = s[j]; 


	return (s);
}
