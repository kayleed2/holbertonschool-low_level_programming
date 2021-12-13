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

	if (key == NULL || !ht)
		return (NULL);

	tmp = ht->array[index];
	index = key_index((const unsigned char *)key, ht->size);

	if (strcmp(tmp->key, key) == 0)
		return (tmp->value);

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
