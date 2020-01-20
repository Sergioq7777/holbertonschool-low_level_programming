#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: Size.
 *
 * Return: Pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned int value = 0;

	new_hash =  malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash->size = size;
	new_hash->array =  malloc(sizeof(hash_node_t *) * (size));
	if (!new_hash->array)
		return (NULL);
	for (value = 0; value < size; value++)
	{
		new_hash->array[value] = NULL;
	}
	return (new_hash);
}
