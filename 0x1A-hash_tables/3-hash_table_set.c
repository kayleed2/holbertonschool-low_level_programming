#include "hash_tables.h"
/**
 * hash_table_set - Adds element to hash table
 * @ht: Hash table to update
 * @key: The key
 * @value: Value associated with the key
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_element, *element = ht->array[index];

	if (key == NULL)
		return (0);

	new_element = malloc(sizeof(hash_node_t) * 1);
	new_element->key = malloc(strlen(key) + 1);
	new_element->value = malloc(strlen(value) + 1);
	new_element->next = NULL;

	strcpy(new_element->key, key);
	strcpy(new_element->value, value);

	if (element == NULL)
	{
		ht->array[index] = new_element;
		return (1);
	}
	else
	{
		ht->array[0] = new_element;
		return (1);
	}
	return (0);
}
