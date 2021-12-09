#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of array
 * Return: Pointer to new hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t) * 1);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table || !table->array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
