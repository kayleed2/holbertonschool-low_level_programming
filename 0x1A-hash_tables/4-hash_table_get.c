#include "hash_tables.h"
/**
 * hash_table_get - Retrieves value of key
 * @ht: Hash table to look into
 * @key: The key looking into
 * Return: Vallue of key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
