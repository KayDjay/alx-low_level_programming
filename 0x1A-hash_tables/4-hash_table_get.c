#include "hash_tables.h"

/**
 * hash_table_get - function to get the hash table
 *
 * @ht: the hash table
 * @key: key to the hash table
 *
 * Return: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp = ht->array[idx];

	if (!ht || !key || !strlen(key) || !ht->array || !ht->size)
		return (NULL);

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
