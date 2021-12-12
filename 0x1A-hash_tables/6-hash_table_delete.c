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
		node = ht->array[i];
		while (ht->array[i] != NULL)
		{
		    temp = node;
			node = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
