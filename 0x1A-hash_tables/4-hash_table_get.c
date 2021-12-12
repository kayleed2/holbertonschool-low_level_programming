#include "hash_tables.h"
/**
 * hash_table_get - Retrieves value of key
 * @ht: Hash table to look into
 * @key: The key looking into
 * Return: Vallue of key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL)
		return (NULL);

	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] =  ht->array[index]->next;
	}
	return (NULL);
}
