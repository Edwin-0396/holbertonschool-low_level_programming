#include "hash_tables.h"
#define TRUE 1
#define FALSE 0

/**
 * hash_table_print - print elements of the hash table
 *@ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	bool comma = TRUE;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (!comma)
				printf(", ");
			else
				comma = FALSE;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
