#include <stdio.h>

void __attribute__((constructor)) Hare_Tortoise(void);

/**
 * Hare_Tortoise - Prints a string before the main function is executed.
 */
void Hare_Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
