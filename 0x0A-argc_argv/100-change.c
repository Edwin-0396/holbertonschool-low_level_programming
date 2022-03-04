#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of inputs on the command line
 * @argv: array with the elements of the command line
 *
 * Return: 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{

	int i = 0, result = atoi(argv[1]), count = 0, coins[5] = {25, 10, 5, 2, 1};

	while (i < 5)
	{
		while (result >= coins[i])
		{
			result = result - coins[i];
			count++;
		}
		i++;
	}
	printf("%d\n", count);
	return (0);
}
