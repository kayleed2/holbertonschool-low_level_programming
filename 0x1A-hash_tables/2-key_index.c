#include "hash_tables.h"
/**
 * key_index - Gives Index of Key
 * @size: Size of array of hash table
 * @key: The key
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, address = hash_djb2(key);

	index = address % size;
	return (index);
}
