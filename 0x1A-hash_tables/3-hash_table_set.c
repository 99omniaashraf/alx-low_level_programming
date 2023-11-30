#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *hash_node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	hash_node->key = strdup(key);
	hash_node->value = strdup(value);

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}
