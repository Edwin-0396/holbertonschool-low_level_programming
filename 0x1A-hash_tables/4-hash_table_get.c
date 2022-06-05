#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i, index;

    if(!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    for(i = index; ht->array[i]; i++)
    {
        if(strcmp(ht->array[i]->key, (const char *)key) == 0)
            return (ht->array[i]->value);
    }
    return (NULL);
}
