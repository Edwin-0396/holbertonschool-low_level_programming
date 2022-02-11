#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Determine if a random number is positive, negative or zero.
*
* Return: Always 0.
*/

int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;
	if (l_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	if (l_d == 0)
		printf("Last digit of %d is %d and is zero\n", n, l_d);
	if (l_d < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	return (0);
}
