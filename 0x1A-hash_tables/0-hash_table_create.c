#include "hash.h"
/**
 * hash_table_create - creates a hash table.
 * @size: Size.
 *
 * Return: Pointer to new hash table
 */
hash_tables_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_;
	unsigned int value;

	new_hash_ = malloc(sizeof(hash_table_t));
	if (!new_hash_)
		return (NULL);
	new_hash_->size = size;
	new_hash_->array =  malloc(sizeof(hash_node_t *) * (size));
	if (!new_hash_->array)
		return (NULL);
	for (value = 0; value < size; value++)
	{
		new_hash_->array[value] = NULL;
	}
	return (new_hash_);
}
