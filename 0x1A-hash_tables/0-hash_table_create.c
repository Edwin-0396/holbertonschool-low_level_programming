#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the address of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **array = NULL;

	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t *));
	if (!array)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = array;

	return (ht);
}
