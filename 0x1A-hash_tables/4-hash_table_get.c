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
    unsigned long int index;

    if (!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    while (ht->array[index])
    {
        if (strcmp(ht->array[index]->key, (const char *)key) == 0)
            return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
    }
    return (NULL);
}
