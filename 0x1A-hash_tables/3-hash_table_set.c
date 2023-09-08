#include "hash_tables.h"

/**
 * hash_table-set - function to adds an element to the hash table
 *
 * @ht: head pointer to hash table
 * @key: key to hash table
 * @value: value to hash table
 *
 * Return: New hash value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	if (update_hash(&(ht->array[idx]), key, value) == NULL)
		return (0);

	return (1);
}

/**
 * update_hash - update the addition of hash table
 *
 * @node: node to set linked list
 * @key: key of the hash
 * @value: value to store in the key
 * Return: head of the hash
 */
hash_node_t *update_hash(hash_node_t **node, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *node;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*node);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *node;
	*node = tmp;

	return (*node);
}
