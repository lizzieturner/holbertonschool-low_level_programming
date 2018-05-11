#include "hash_tables.h"

/**
 * hash_table_get - returns value associated with a certain key
 * @ht: hash table
 * @key: key
 *
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	value = current->value;
	return (value);
}
