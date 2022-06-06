#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @ht: hash table input
 * @key: key for the hash table
 * @value: value for the specific key
 *
 * Return: 1 on succes 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	char *dup_value = NULL;
	unsigned long int index = 0, i = 0;

	if (!ht || !key || !*key || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	dup_value = strdup(value);
	if (!dup_value)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
	}

	element = malloc(sizeof(hash_node_t));
	if (!element)
	{
		free(dup_value);
		return (0);
	}
	element->key = strdup(key);
	if (!element->key)
	{
		free(element);
		return (0);
	}
	element->value = dup_value;
	element->next = ht->array[index];
	ht->array[index] = element;

	return (1);
}
