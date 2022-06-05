#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if(size == 0 || key == NULL)
        return (0);

    return (hash_djb2(key) % size);
}

