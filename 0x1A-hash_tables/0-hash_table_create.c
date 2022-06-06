#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * Return: pointer to the address of the hash table
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
	if (!array)
	{
		return (NULL);
	}

	ht->array = array;

	return (ht);
}
