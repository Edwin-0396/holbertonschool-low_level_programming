#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of argumements
 * @av: arguments
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0, k = 0;
	char *array;

	if (ac == 0 || !av)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			j++;
			len++;
		}
		j = 0;
		i++;
	}

	len += ac;

	array = malloc(sizeof(char) * len + 1);
	if (!array)
		return (NULL);

	i = 0, j = 0;

	while (i < ac)
	{
		while (av[i][j])
		{
			array[k] = av[i][j];
			j++;
			k++;
		}
		if (array[k] == '\0')
			array[k++] = '\n';

		j = 0;
		i++;
	}
	return (array);
}
