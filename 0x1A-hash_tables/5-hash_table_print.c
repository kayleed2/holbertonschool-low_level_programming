#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table
 * @ht: Hash table to print
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
