#include "main.h"

/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: the encode string
 */

char *leet(char *str)
{
	int i = 0, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}

}

