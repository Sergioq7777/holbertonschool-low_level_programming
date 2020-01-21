#include "hash_tables.h"
/**
 *hash_table_set - adds to hash table
 *
 *@ht: hash table
 *@key: key.
 *@value: value
 *Return: 1 True
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add_h;
	unsigned long int ind = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	add_h = malloc(sizeof(hash_node_t));
	if (!add_h)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
	{
		add_h->key = strdup(key);
		if (!add_h->key)
			return (0);
		add_h->value = strdup(value);
		if (!add_h->value)
			return (0);
		add_h->next = NULL;
		ht->array[ind] = add_h;
		return (1);
	}
	free(add_h);
	return (h_t_s(ht, key, value));
}
/**
 *h_t_s - adds hash table
 *
 *@ht: hash
 *@key: Key
 *@value: value key
 *Return: 1 true
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux, *add_h;
	unsigned long int ind = 0;

	add_h = malloc(sizeof(hash_node_t));
	if (!add_h)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	aux =  ht->array[ind];
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			if (!aux->value)
				return (0);
			return (1);
		}
		aux = aux->next;
	}
	aux = ht->array[ind];
	add_h->key = strdup(key);
	if (!add_h->key)
		return (0);
	add_h->value = strdup(value);
	if (!add_h->value)
		return (0);
	add_h->next = aux;
	ht->array[ind] = add_h;
	return (1);
}
