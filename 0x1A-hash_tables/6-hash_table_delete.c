#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *temp;

	if (!ht)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				node = ht->array[i]->next;
				while (node != NULL)
				{
					temp = node;
					node = node->next;
					free(temp->key);
					free(temp->value);
					free(temp);
				}
			}
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
