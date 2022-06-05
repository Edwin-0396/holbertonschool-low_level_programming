#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    hash_node_t **array = NULL;

    ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

    ht->size = size;
    array = calloc(size, sizeof(hash_node_t *));
    if(!array)
    {
        return (NULL);
    }

    ht->array = array;

    return (ht);
}
