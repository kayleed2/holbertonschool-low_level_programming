#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table
 * @ht: Hash table to print
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}");
	printf("\n");
}
