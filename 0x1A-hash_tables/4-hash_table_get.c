#include "hash_tables.h"

/**
 * hash_table_get - get a value for a key
 * @ht: hash table input
 * @key: key for the hash table
 *
 * Return: NULL if failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, (const char *)key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
