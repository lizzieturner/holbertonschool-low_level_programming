#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 *
 * Return: created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t) * size);
	if (new == NULL)
		return (NULL);

	return (new);
}
